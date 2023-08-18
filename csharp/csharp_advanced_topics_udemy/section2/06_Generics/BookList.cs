using System;

namespace Generics
{
    public class BookList
    {
        public void Add(Book book)
        {
            throw new NotImplementedException();
        }

        public BookList this[int index]
        {
            get { throw new NotImplementedException(); }
        }
    }

    public class GenericList<T>
    {
        public void Add(T value)
        {
            // ...
        }

        public T this[int index]
        {
            get { throw new NotImplementedException(); }
        }
    }
}
