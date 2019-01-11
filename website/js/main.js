function runHeartfuckToBrainfuck() {
  var output = "";

  var string = document.getElementById('heartfuckToBrainfuck').value;

  for (i = 0; i < string.length; i++) {

    // < > + [ ]
    if (string.charCodeAt(i) === 55357) {
      // >
      if (string.charCodeAt(i + 1) === 56471) {
        i++;
        output += ">";
      }

      // <
      else if (string.charCodeAt(i + 1) === 56476) {
        i++;
        output += "<";
      }

      // +
      else if (string.charCodeAt(i + 1) === 56470) {
        i++;
        output += "+";
      }

      //.
      else if (string.charCodeAt(i + 1) === 56460) {
        i++;
        output += ".";
      }

      // [
      else if (string.charCodeAt(i + 1) === 56475) {
        i++;
        output += "[";
      }

      // ]
      else if (string.charCodeAt(i + 1) === 56473) {
        i++;
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
  document.getElementById('outputHFBF').innerHTML = output;
  return output;
}

function convertToDiscord() {
  var output = "";
  var string = document.getElementById('tagsToHeartfuck').value;
  var split = string.split(":");

  for (i = 0; i < split.length; i++) {
    if (!split[i].includes(" ") && split[i] !== null && split[i] !== undefined) {
      switch (split[i]) {
        case "heartpulse":
          output += "💗";
          break;
        case "purple_heart":
          output += "💜";
          break;
        case "sparkling_heart":
          output += "💖";
          break;
        case "heart":
          output += "❤️";
          break;
        case "love_letter":
          output += "💌";
          break;
        case "heart_exclamation":
          output += "❣️";
          break;
        case "yellow_heart":
          output += "💛";
          break;
        case "blue_heart":
          output += "💙";
          break;
      }
    }
  }

  document.getElementById('outputDSC').innerHTML = output;
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
  document.getElementById('outputBFHF').innerHTML = output;
  return output;
}


function textToHeartfuck() {
  var output = "";
  var string = document.getElementById('textToHeartfuck').value;

  for (let i = 0; i < string.length; i++) {
    output += "💗";
    let asc = string.charCodeAt(i);
    if (asc < 10) {
      for (let j = 0; j < asc; j++) {
        output += "💖";
      }
      output += "💌💗";
    }
    else {
      let root = parseInt(Math.floor(Math.sqrt(asc)));
      for (let i = 0; i < root; i++) {
        output += "💖";
      }
      output += "💛💗";
      let quotient = parseInt(Math.floor(asc / root));
      for (let i = 0; i < quotient; i++) {
        output += "💖";
      }
      output += "💜❤️💙💗";
      let remainder = asc - (root * quotient);
      for (let i = 0; i < remainder; i++) {
        output += "💖";
      }
      output += "💌";
    }
  }
  console.log("oof");
  document.getElementById('outputTXT').innerHTML = output;
  return output;
}

function interpretHeartfuck() {
  var data = [];
  var pointer = 0;
  var string = document.getElementById('interpretHeartfuck').value;

  document.getElementById('outputRUN').innerHTML = "";

  for (i = 0; i < string.length; i++) {
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
        dot(data, pointer, "outputRUN");
      }

      // [
      else if (string.charCodeAt(i + 1) === 56475) {
        i++;
        i = open(data, pointer, string, i);
      }

      // ]
      else if (string.charCodeAt(i + 1) === 56473) {
        i++;
        i = close(data, pointer, string, i);
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
        comma(data, pointer, "outputRUN");
      }
    }
  }
}