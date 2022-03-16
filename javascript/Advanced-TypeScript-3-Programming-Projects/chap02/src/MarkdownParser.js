var HtmlHandler = /** @class */ (function () {
    function HtmlHandler() {
    }
    HtmlHandler.prototype.TextChangeHandler = function (id, output) {
        var markdown = document.getElementById(id);
        var markdownOutput = document.getElementById(output);
        if (markdown !== null) {
            markdown.onkeyup = function (e) {
                if (markdown.value) {
                    markdownOutput.innerHTML = markdown.value;
                }
                else {
                    markdownOutput.innerHTML = '<p></p>';
                }
            };
        }
    };
    return HtmlHandler;
}());
