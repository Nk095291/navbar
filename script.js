$(window).ready(function () {
    let bar = $('.bar');
    console.log('test')
    bar.on('click', show);


})
let flag = true;
function show() {
    $('.menu').toggleClass('showmenu');

    let barline = $('.com').toArray();
    $(barline[0]).toggleClass('line1');
    $(barline[1]).toggleClass('line2');
    $(barline[2]).toggleClass('line3');
    let links = $('.menu li').toArray();
    links.forEach((e, i) => {
        if (flag) {
            let delay = (i/10)+0.2;
            $(e).css({
                "animation": `animate 1s linear ${delay}s`
            });
        }
        else {

            $(e).css({
                "animation": "none"
            });
        }
    })
    flag=!flag;
}