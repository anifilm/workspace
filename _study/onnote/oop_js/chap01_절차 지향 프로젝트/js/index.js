// 그리기 도구 유형값 (심볼 데이터 타입으로 수정)
const LINE_DRAW_TYPE = Symbol('line');
const RECTANGE_DRAW_TYPE = Symbol('rectangle');
const ELLIPSE_DRAW_TYPE = Symbol('ellipse');
const FREE_PATH_DRAW_TYPE = Symbol('free_path');

// 현재 그리기 도구 유형 변수
let g_DrawType = LINE_DRAW_TYPE;

// mousedown 마우스 좌표값을 나타내는 전역변수 정의
let g_pressPoint = null;

// 자유선 마우스 포인터의 좌표 배열 전역변수 정의
let g_freePathPointArray = null;

window.onload = function () {
  // 툴바 요소 가져오기
  let toolbar = document.getElementById('toolbar');

  let inputImage = createButton('./images/line.gif', 'btnLine');
  toolbar.appendChild(inputImage);

  inputImage = createButton('./images/rectangle.gif', 'btnRectangle');
  toolbar.appendChild(inputImage);

  inputImage = createButton('./images/ellipse.gif', 'btnEllipse');
  toolbar.appendChild(inputImage);

  inputImage = createButton('./images/free_path.gif', 'btnFreePath');
  toolbar.appendChild(inputImage);

  // 캔버스 요소 가져오기
  let canvas = document.getElementById('myCanvas');
  canvas.width = 600;
  canvas.height = 400;

  canvas.style.border = '1px solid gray';
  canvas.style.cusor = 'pointer';

  // 캔버스 렌더링 컨텍스트 가져오기
  let ctx = canvas.getContext('2d');
  // 캔버스 그래픽스 속성 설정
  ctx.lineWidth = 3;
  ctx.strokeStyle = 'red';
  ctx.fillStyle = 'blue';

  /* 직사각형 그리기
  let x = 100;
  let y = 50;
  let w = 120;
  let h = 80;

  ctx.fillRect(x, y, w, h);
  ctx.strokeRect(x, y, w, h);
  */

  // 도구 선택 버튼에 이벤트리스너를 등록
  let btnLine = document.getElementById('btnLine');
  let btnRectangle = document.getElementById('btnRectangle');
  let btnEllipse = document.getElementById('btnEllipse');
  let btnFreePath = document.getElementById('btnFreePath');

  // 화살표 표기법으로 화살표 함수를 사용
  btnLine.addEventListener('click', (e) => {
    setDrawType(LINE_DRAW_TYPE);
  }, false);
  btnRectangle.addEventListener('click', (e) => {
    setDrawType(RECTANGE_DRAW_TYPE);
  }, false);
  btnEllipse.addEventListener('click', (e) => {
    setDrawType(ELLIPSE_DRAW_TYPE);
  }, false);
  btnFreePath.addEventListener('click', (e) => {
    setDrawType(FREE_PATH_DRAW_TYPE);
  }, false);

  // 캔버스에 mousedown 이벤트의 이벤트 리스너로 등록
  canvas.addEventListener('mousedown', (e) => {
    // 캔버스 기준의 mousedown 포인터 좌표
    //let pressPoint = relativePosition(e, canvas);

    // 캔버스 이미지 정보를 저장
    let canvasImageData = ctx.getImageData(0, 0, canvas.width, canvas.height);
    // 마우스 좌표 정보를 전역변수에 저장
    g_pressPoint = relativePosition(e, canvas);
    // 자유선 마우스 포인터의 좌표 배열 초기화
    g_freePathPointArray = [];

    // mousemove 이벤트의 이벤트 리스너로 등록
    let mousemoveEventListener = (e) => {
      // 캔버스 이미지 정보를 되돌린다.
      ctx.putImageData(canvasImageData, 0, 0);
      // 캔버스 기준의 mousemove 포인터 좌표
      let movePoint = relativePosition(e, canvas);
      // 움직이는 마우스 좌표 추가
      g_freePathPointArray.push(movePoint);

      //console.log(`mousemove movePoint.x {movePoint.x} mousePoin.y = ${movePoint.y}`);

      // 그리기 함수로 마우스 위치까지 그린다.
      drawing(ctx, movePoint);
    }
    document.addEventListener('mousemove', mousemoveEventListener, false);

    // mouseup 이벤트 리스너를 등록
    let mouseupEventListener = (e) => {
      let upPoint = relativePosition(e, canvas);

      // 마우스 좌표 추가
      g_freePathPointArray.push(upPoint);

      ctx.putImageData(canvasImageData, 0, 0);

      drawing(ctx, upPoint);

      // mousemove 이벤트 리스너를 제거
      document.removeEventListener('mousemove', mousemoveEventListener, false);
      // mouseup 이벤트 리스너를 제거
      document.removeEventListener('mouseup', mouseupEventListener, false);
    }
    document.addEventListener('mouseup', mouseupEventListener, false);
  }, false);

  // 캔버스 선 너비를 설정하는 change 이벤트 리스너
  let strokeWidthChangeEventListener = function (e) {
    ctx.lineWidth = this.value;
  }

  // 선 너비를 설정하는 콤보박스를 만들고 툴바에 추가
  let size = [1, 2, 3, 4, 5, 6, 8, 10, 12, 14, 16, 20, 24, 28];
  let select = document.createElement('select');
  for (let i = 0; i < size.length; i++) {
    let option = document.createElement('option');
    option.setAttribute('value', size[i].toString());
    let optionText = document.createTextNode(size[i].toString());
    option.appendChild(optionText);

    select.appendChild(option);
  }
  select.selectedIndex = 2;

  // change 이벤트 리스너 등록
  select.addEventListener('change', strokeWidthChangeEventListener, false);

  let labelStrokeWidth = document.createElement('label');
  let labelStrokeWidthText = document.createTextNode('선 너비:');

  labelStrokeWidth.appendChild(labelStrokeWidthText);
  labelStrokeWidth.appendChild(select);

  toolbar.appendChild(labelStrokeWidth);

  // 캔버스 선 색을 설정하는 change 이벤트 리스너
  let strokeColorChangeEventListener = function (e) {
    ctx.strokeStyle = this.value;
  }

  // 선 색을 설정하는 컬러 입력요소를 포함한 레이블 요소를 만들고 툴바에 추가
  let labelForStrokeColor = createLabelForColor('선 색:', '#ff0000', strokeColorChangeEventListener);
  toolbar.appendChild(labelForStrokeColor);

  // 캔버스 채움 색을 설정하는 change 이벤트 리스너
  let fillColorChangeEventListener = function (e) {
    ctx.fillStyle = this.value;
  }

  // 채움 색을 설정하는 컬러 입력요소를 포함한 레이블 요소를 만들고 툴바에 추가
  let labelForFillColor = createLabelForColor('채움 색:', "#0000ff", fillColorChangeEventListener);
  toolbar.appendChild(labelForFillColor);
}

function createButton(imagePath, id) {
  let inputImage = document.createElement('input');
  inputImage.setAttribute('type', 'image');
  inputImage.setAttribute('src', imagePath);
  inputImage.setAttribute('id', id);

  return inputImage;
}

// 컬러 입력요소를 포함한 레이블 요소 생성
function createLabelForColor(text, defaultValue, changeEventListener) {
  let labelForColor = document.createElement('label');
  let labelText = document.createTextNode(text);

  let inputColor = document.createElement('input');
  inputColor.setAttribute('type', 'color');

  inputColor.value = defaultValue;

  inputColor.addEventListener('change', changeEventListener, false);

  labelForColor.appendChild(labelText);
  labelForColor.appendChild(inputColor);

  return labelForColor;
}

// 현재 그리기 도구 유형값을 설정
function setDrawType(drawType) {
  g_DrawType = drawType;
}

// 캔버스 요소에 대한 마우스 포인터의 상대 위치를 구한다.
function relativePosition(event, element) {
  let rect = element.getBoundingClientRect();
  return {
    x: Math.floor(event.clientX - rect.left),
    y: Math.floor(event.clientY - rect.top),
  };
}

// 그리기 함수 정의
function drawing(ctx, p) {
  if (g_DrawType === LINE_DRAW_TYPE) {
    ctx.beginPath();
    ctx.moveTo(g_pressPoint.x, g_pressPoint.y);
    ctx.lineTo(p.x, p.y);
    ctx.stroke();
  }
  else if (g_DrawType === RECTANGE_DRAW_TYPE) {
    let w = p.x - g_pressPoint.x;
    let h = p.y - g_pressPoint.y;

    ctx.fillRect(g_pressPoint.x, g_pressPoint.y, w, h);
    ctx.strokeRect(g_pressPoint.x, g_pressPoint.y, w, h);
  }
  else if (g_DrawType === ELLIPSE_DRAW_TYPE) {
    let w = p.x - g_pressPoint.x;
    let h = p.y - g_pressPoint.y;

    drawEllipseByBezierCurve(ctx, g_pressPoint.x, g_pressPoint.y, w, h);
  }
  else if (g_DrawType === FREE_PATH_DRAW_TYPE) {
    ctx.beginPath();
    ctx.moveTo(g_pressPoint.x, g_pressPoint.y);

    for (let i = 0; i < g_freePathPointArray.length; i++) {
      ctx.lineTo(g_freePathPointArray[i].x, g_freePathPointArray[i].y);
    }

    ctx.stroke();
  }
}

// 베지어곡선을 이용한 타원 그리기를 구현
function drawEllipseByBezierCurve(ctx, x, y, w, h) {
  let kappa = .5522848,
  ox = (w / 2) * kappa,
  oy = (h/ 2) * kappa,
  xe = x + w,
  ye = y + h,
  xm = x + w / 2,
  ym = y + h / 2;

  ctx.beginPath();
  ctx.moveTo(x, ym);
  ctx.bezierCurveTo(x, ym - oy, xm - ox, y, xm, y);
  ctx.bezierCurveTo(xm + ox, y, xe, ym - oy, xe, ym);
  ctx.bezierCurveTo(xe, ym + oy, xm + ox, ye, xm, ye);
  ctx.bezierCurveTo(xm - ox, ye, x, ym + oy, x, ym);

  ctx.fill();
  ctx.stroke();
}
