// Generated by BUCKLESCRIPT VERSION 2.2.3, PLEASE EDIT WITH CARE
'use strict';

var Moment = require("moment");

function aLine(value) {
  return /* record */[
          /* d */Moment(),
          /* desc */"Hnasdf",
          /* qty */value
        ];
}

function h(a, b) {
  return a + b | 0;
}

console.log(aLine(45.90));

exports.aLine = aLine;
exports.h = h;
/*  Not a pure module */
