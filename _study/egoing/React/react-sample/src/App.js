import React, { Component } from 'react';

class Subject extends Component {
  render() {
    return (
      <header>
        <h1>{this.props.title}</h1>
        {this.props.sub}
      </header>
    );
  }
}

class TOC extends Component {
  render() {
    // let list = [
    //   <li><a href="1.html">HTML</a></li>,
    //   <li><a href="2.html">CSS</a></li>,
    //   <li><a href="3.html">JavaScript</a></li>
    // ];
    let list = [];
    let i = 0;
    while (i < this.props.data.length){
      let data = this.props.data[i];
      list.push(
        <li key={data.id}>
          <a href={data.id+'.html'} onClick={function (id, ev){
            ev.preventDefault();
            this.props.onSelect(id);
          }.bind(this, data.id)}>
            {data.title}
          </a>
        </li>
      );
      i += 1;
    }

    return (
      <nav>
        <ol>
          {list}
        </ol>
      </nav>
    );
  }
}

class Content extends Component {
  render() {
    return (
      <article>
        <h1>{this.props.data.title}</h1>
        {this.props.data.desc}
      </article>
    );
  }
}

class App extends Component {
  state = {
    selected_content_id:1,
    contents:[
      {id:1, title:'HTML', desc:"HTML is for imformation"},
      {id:2, title:'CSS', desc:"CSS is for design"},
      {id:3, title:'JavaScript', desc:"JavaScript is for interaction"}
    ]
  }
  getSelectedContent(){
    let i = 0;
    while (i < this.state.contents.length){
      let data = this.state.contents[i];
      if (this.state.selected_content_id === data.id){
        return data;
      }
      i += 1;
    }
  }
  render() {
    return (
      <div className="App">

        <Subject title="WEB" sub="World wide web"></Subject>
        <TOC onSelect={function(id){
          console.log('App', id);
          this.setState({
            selected_content_id: id
          });
        }.bind(this)} data={this.state.contents}></TOC>
        <Content data={this.getSelectedContent()}></Content>

      </div>
    );
  }
}

export default App;
