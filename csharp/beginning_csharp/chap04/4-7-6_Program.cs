using System;

using Communication;
using Disk.FileSystem;

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
        Http http = new Http();
        File file = new File();
    }
}
