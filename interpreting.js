
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

function open(data, pointer) {
    document.getElementById('output').innerHTML += "💛NOT IMPLEMENTED💛";
}
function close(data, pointer) {
    document.getElementById('output').innerHTML += "💙NOT IMPLEMENTED💙";
}