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
    name:"",
    getName:function(){
        console.log(this.name);
    }
}

var getName=obj.getName;

var obj2={name:"Modi",getName};

obj2.getName()

const classDetails = {
    strength: 78,
    benches: 39,
    blackBoard:1
    }
    const {strength:classStrength, benches:classBenches,blackBoard:classBlackBoard} = classDetails
    console.log(classStrength);
    console.log(classBenches);
    console.log(classBlackBoard); 

    var arr=[ 3, 6, 9, 18, 15, 12 ]

    var newArr=arr.map(function(n){
        return n/3;
    })

    newArr

    var check=newArr.filter(function(n){
        return n%2;
    })

    check

    var sum=newArr.reduce(function(a,b){
        return a+b;
    })

    sum