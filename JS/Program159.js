class Demo {
    constructor(a, b) {
        this.no1 = a
        this.no2 = b
        console.log("Inside constructor");
    }
}
function main() {
    dobj = new Demo(11, 21)
    console.log(dobj.no1);
    console.log(dobj.no2);
    
}

main()
