using System;

namespace MilkyWay {
    class Earth {

    }
}

namespace Andromeda {
    class Earth {

    }
}

namespace Communication {
    class Http {

    }
    class Ftp {

    }
}

namespace Disk.FileSystem {
    class File {

    }
}


class Program {
    static void Main(string[] args) {
        Communication.Http http = new Communication.Http();
        Disk.FileSystem.File file = new Disk.FileSystem.File();
    }
}
