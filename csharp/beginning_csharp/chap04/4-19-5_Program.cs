/*
class Platter {
}

class Head {
}

public class HardDisk {
    Platter[] platter;
    Head head;
}
*/

public class HardDisk {
    class Platter {
    }

    class Head {
    }

    Platter[] platter;
    Head head;
}

class Program {
    static void Main(string[] args) {
        //HardDisk.Head head = new HardDisk.Head(); // 접근 제한 컴파일 오류
    }
}
