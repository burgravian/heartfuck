
function pointRight(data, pointer) {
    data[pointer] = data[pointer] || 0;
    pointer++;
    return pointer;
}

function pointLeft(data, pointer) {
    data[pointer] = data[pointer] || 0;
    pointer--;
    if (pointer < 0) {
        pointer = 0;
    }
    return pointer;
}

function plus(data, pointer) {
    data[pointer] = data[pointer] || 0;
    data[pointer]++;
}

function minus(data, pointer) {
    data[pointer] = data[pointer] || 0;
    data[pointer]--;
}

function dot(data, pointer, outputFieldID) {
    document.getElementById(outputFieldID).innerHTML += String.fromCharCode(data[pointer]);
}

function comma(data, pointer, inputFieldID) {
    document.getElementById(inputFieldID).innerHTML += "❣️";
}

function open(data, pointer, input, i) {
    data[pointer] = data[pointer] || 0;
    if (data[pointer] === 0) {
        var depthCounter = 1;
        while (depthCounter !== 0) {
            i++;
            if ((input.charCodeAt(i) === 55357) && (input.charCodeAt(i + 1) === 56475)) {
                i++;
                depthCounter++;
            }
            if ((input.charCodeAt(i) === 55357) && (input.charCodeAt(i + 1) === 56473)) {
                i++;
                depthCounter--;
            }
        }
    }
    return i;
}

function close(data, pointer, input) {
    data[pointer] = data[pointer] || 0;
    if (data[pointer] !== 0) {
        var depthCounter = 1;
        while (depthCounter !== 0) {
            i--;
            if ((input.charCodeAt(i) === 56475) && (input.charCodeAt(i - 1) === 55357)) {
                i--;
                depthCounter--;
            }
            if ((input.charCodeAt(i) === 56473) && (input.charCodeAt(i - 1) === 55357)) {
                i--;
                depthCounter++;
            }
        }
    }
    return i;
}