package spms.vo;

import java.util.Date;

public class Member {
    protected int       no;
    protected String    name;
    protected String    email;
    protected String    password;
    protected Date      createDate;
    protected Date      modifiedDate;

    public int getNo() {
        return no;
    }

    public Member setNo(int no) {
        this.no = no;
        return this;
    }

    public String getName() {
        return name;
    }

    public Member setName(String name) {
        this.name = name;
        return this;
    }

    public String getEmail() {
        return email;
    }

    public Member setEmail(String email) {
        this.email = email;
        return this;
    }

    public String getPassword() {
        return password;
    }

    public Member setPassword(String password) {
        this.password = password;
        return this;
    }

    public Date getCreateDate() {
        return createDate;
    }

    public Member setCreateDate(Date createDate) {
        this.createDate = createDate;
        return this;
    }

    public Date getModifiedDate() {
        return modifiedDate;
    }

    public Member setModifiedDate(Date modifiedDate) {
        this.modifiedDate = modifiedDate;
        return this;
    }
}
