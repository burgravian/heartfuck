
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

function dot(data, pointer) {
    document.getElementById('output').innerHTML += String.fromCharCode(data[pointer]);
}

function comma(data, pointer) {
    document.getElementById('output').innerHTML += "❣️";
}

function open(data, pointer, input, i) {
    //document.getElementById('output').innerHTML += "💛NOT IMPLEMENTED💛";
    data[pointer] = data[pointer] || 0;
    if (data[pointer] === 0) {
        var depthCounter = 1;
        console.log("Found a start loop at " + i);
        while (depthCounter !== 0) {
            i++;
            if ((input.charCodeAt(i) === 55357) && (input.charCodeAt(i + 1) === 56475)) {
                i++;
                console.log("found unmatched [");
                depthCounter++;
            }
            if ((input.charCodeAt(i) === 55357) && (input.charCodeAt(i + 1) === 56473)) {
                i++;
                console.log("found matching ]");
                depthCounter--;
            }
        }
    }
    return i;
}
function close(data, pointer, input) {
    //document.getElementById('output').innerHTML += "💙NOT IMPLEMENTED💙";
    data[pointer] = data[pointer] || 0;
    if (data[pointer] !== 0) {
        var depthCounter = 1;
        console.log("found an end loop at " + i);
        while (depthCounter !== 0) {
            i--;
            if ((input.charCodeAt(i) === 56475) && (input.charCodeAt(i - 1) === 55357)) {
                i--;
                console.log("found matching [");
                depthCounter--;
            }
            if ((input.charCodeAt(i) === 56473) && (input.charCodeAt(i - 1) === 55357)) {
                i--;
                console.log("found unmatched ]");
                depthCounter++;
            }
        }
    }
    return i;
}