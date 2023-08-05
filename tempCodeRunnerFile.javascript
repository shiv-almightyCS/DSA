// var arr=[4,5,9,69,99,1,2,3]
// console.log(typeof arr[0]);
// var b;
// // console.log(arr.);

// console.log(arr);
// // console.log(arr.);

// a=9
// b=5
// console.log(a+b);
// var a=5;
// var b;
// var obj1= {name:"Shiv",surname:"Modi"}
// var obj2=obj1;
// console.log(obj1);
// (function(a,b){
//     console.log("hello");
//     return a+b
// })();
// var a="hello"
// const add =(a,b)=>{
//     console.log("hello");
//     return a+b;
// }

// console.log(add(1,2));

// //higher order function

function add(fn){
    fn();
}

var red=true
var blue = false
var green;

if(red)
    console.log("The statement is true");
else
    console.log("The  statement is flase");


add(function() {
    console.log("hello world");
});

var a=[0,1,2,NaN];
var b="hello"
if(a) console.log("hello");
console.log(isNaN(b));

var obj={
    name:"Shiv",
    getName:function(){
        console.log(this.name);
    }
}

var getName=obj.getName;

var obj2={name:"Modi",getName};

obj2.getName()

