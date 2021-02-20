const doesntBreak = () => {
    try {
        invalidFunction();
    } catch(error) {
        console.log(error);
    }
}

//sample usage
doesntBreak();
