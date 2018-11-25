function run(){
  var string = document.getElementById('heartfuck').value;
  for(i = 0; i < string.length; i++){
    console.log(i + ": " + string.charCodeAt(i));
    
    // < > + - 
    if(string.charCodeAt(i) === 55357){
      // >
      if(string.charCodeAt(i + 1) === 56471){
        i++;
        console.log(i + ": " + string.charCodeAt(i));
        alert(">");
      }
      
      // <
      else if(string.charCodeAt(i + 1) === 56476){
        i++;
        console.log(i + ": " + string.charCodeAt(i));
        alert("<");
      }
      
      // +
      else if(string.charCodeAt(i + 1) === 56470){
        i++;
        console.log(i + ": " + string.charCodeAt(i));
        alert("+");
      }
      
      // -
      else if(string.charCodeAt(i + 1) === 56474){
        i++;
        console.log(i + ": " + string.charCodeAt(i));
        alert("-");
      }
      
      //.
      else if(string.charCodeAt(i + 1) === 56460){
        i++;
        console.log(i + ": " + string.charCodeAt(i));
        alert(".");
      }
      
      // [
      else if(string.charCodeAt(i + 1) === 56475){
        i++;
        console.log(i + ": " + string.charCodeAt(i));
        alert("[");
      }
      
      // ]
      else if(string.charCodeAt(i + 1) === 56473){
        i++;
        console.log(i + ": " + string.charCodeAt(i));
        alert("]");
      }
    }
    
    // ,
    else if(string.charCodeAt(i) === 10083){
      if(string.charCodeAt(i + 1) === 65039){
        i++;
        alert(",");
      }
    }
    
    
    
    
  }
}