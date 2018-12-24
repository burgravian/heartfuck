function runHeartfuckToBrainfuck(string) {
  var output = "";

  if (string == -1) {
    string = document.getElementById('heartfuckToBrainfuck').value;
  }


  for (i = 0; i < string.length; i++) {
    console.log(i + ": " + string.charCodeAt(i));

    // < > + [ ]
    if (string.charCodeAt(i) === 55357) {
      // >
      if (string.charCodeAt(i + 1) === 56471) {
        i++;
        console.log(i + ": " + string.charCodeAt(i));
        output += ">";
      }

      // <
      else if (string.charCodeAt(i + 1) === 56476) {
        i++;
        console.log(i + ": " + string.charCodeAt(i));
        output += "<";
      }

      // +
      else if (string.charCodeAt(i + 1) === 56470) {
        i++;
        console.log(i + ": " + string.charCodeAt(i));
        output += "+";
      }

      //.
      else if (string.charCodeAt(i + 1) === 56460) {
        i++;
        console.log(i + ": " + string.charCodeAt(i));
        output += ".";
      }

      // [
      else if (string.charCodeAt(i + 1) === 56475) {
        i++;
        console.log(i + ": " + string.charCodeAt(i));
        output += "[";
      }

      // ]
      else if (string.charCodeAt(i + 1) === 56473) {
        i++;
        console.log(i + ": " + string.charCodeAt(i));
        output += "]";
      }
    }

    // -
    else if (string.charCodeAt(i) === 10084) {
      if (string.charCodeAt(i + 1) === 65039) {
        i++;
        output += "-";
      }
    }

    // ,
    else if (string.charCodeAt(i) === 10083) {
      if (string.charCodeAt(i + 1) === 65039) {
        i++;
        output += ",";
      }
    }
  }
  document.getElementById('output').innerHTML = output;
  return output;
}


function runBrainfuckToHeartfuck() {
  var output = "";
  var string = document.getElementById('brainfuckToHeartfuck').value;


  for (i = 0; i < string.length; i++) {
    switch (string.charAt(i)) {
      case ">":
        output += "💗";
        break;
      case "<":
        output += "💜";
        break;
      case "+":
        output += "💖";
        break;
      case "-":
        output += "❤️";
        break;
      case ".":
        output += "💌";
        break;
      case ",":
        output += "❣️";
        break;
      case "[":
        output += "💛";
        break;
      case "]":
        output += "💙";
        break;
    }

  }
  document.getElementById('output').innerHTML = output;
  return output;
}

/*
function interpretHeartfuck() {
  var input = document.getElementById('interpretHeartfuck').value;
  input = runHeartfuckToBrainfuck(input);
  interpretBrainfuck(input);
}
*/

function interpretBrainfuck(input) {
  var data = [];
  var pointer = 0;

  document.getElementById('output').innerHTML = "";
  if (input == -1) {
    input = document.getElementById('interpretBrainfuck').value;
  }
  for (i = 0; i < input.length; i++) {
    switch (input.charAt(i)) {
      case ">":
        pointer = pointRight(data, pointer);
        break;
      case "<":
        pointer = pointLeft(data, pointer);
        break;
      case "+":
        plus(data, pointer);
        break;
      case "-":
        minus(data, pointer);
        break;
      case ".":
        dot(data, pointer);
        break;
      case ",":
        comma(data, pointer);
        break;
      case "[":
        open(data, pointer);
        break;
      case "]":
        close(data, pointer);
        break;
    }
  }
}


function interpretHeartfuck() {
  var data = [];
  var pointer = 0;
  var string = document.getElementById('interpretHeartfuck').value;

  document.getElementById('output').innerHTML = "";

  for (i = 0; i < string.length; i++) {
    console.log(i);
    // < > + [ ]
    if (string.charCodeAt(i) === 55357) {
      // >
      if (string.charCodeAt(i + 1) === 56471) {
        i++;
        pointer = pointRight(data, pointer);
      }

      // <
      else if (string.charCodeAt(i + 1) === 56476) {
        i++;
        pointer = pointLeft(data, pointer);
      }

      // +
      else if (string.charCodeAt(i + 1) === 56470) {
        i++;
        plus(data, pointer);
      }

      //.
      else if (string.charCodeAt(i + 1) === 56460) {
        i++;
        dot(data, pointer);
      }

      // [
      else if (string.charCodeAt(i + 1) === 56475) {
        i++;
        i=open(data, pointer, string, i);
      }

      // ]
      else if (string.charCodeAt(i + 1) === 56473) {
        i++;
        i=close(data, pointer, string, i);
      }
    }

    // -
    else if (string.charCodeAt(i) === 10084) {
      if (string.charCodeAt(i + 1) === 65039) {
        i++;
        minus(data, pointer);
      }
    }

    // ,
    else if (string.charCodeAt(i) === 10083) {
      if (string.charCodeAt(i + 1) === 65039) {
        i++;
        comma(data, pointer);
      }
    }
  }
}