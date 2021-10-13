function sayhello(name){
  const msg = `hello,${name}`;
  console.log(msg);
}
sayhello();
sayhello('mike');

function add(n1,n2){
  return n1+n2;
}
const result = add(2,3);
console.log(result);

let showError = function(){
  console.log('error');
}

const superman = {
  name : 'clasrk',
  age : 20,
}
console.log(superman.name)
superman.hair = 'black';

function make(name,age){
  return {
    name : name,
    age : age,
  };
}
const Mike = make("Mike",30);
console.log(Mike);

console.log("age" in Mike);

function is(user){
  if(user.age <20){
    return false;
  } else {
    return true;
  }
}
const Mike = {
  name: "Mike",
  age : 30
};
