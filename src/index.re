[%bs.raw {|require('./index.css')|}];

[@bs.module "./registerServiceWorker"] external register_service_worker : unit => unit = "default";

open Line;
open MomentRe; 

let aLine = (value) => {
    d: momentNow(),
    desc: "Hnasdf",
    qty: value
};
let h = (a,b) => a+b;

Js.log(aLine(45.90));

ReactDOMRe.renderToElementWithId(<App message="Welcome to React and Reason" />, "root");

register_service_worker();
