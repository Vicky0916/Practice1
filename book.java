package com.dao;

public class book {
	private String book_no;
	private String pub_no;
	private String book_name;
	private String book_author;
	private String book_num;
	private String book_wz;
	public String getBook_no() {
		return book_no;
	}
	public void setBook_no(String book_no) {
		this.book_no = book_no;
	}
	public String getPub_no() {
		return pub_no;
	}
	public void setPub_no(String pub_no) {
		this.pub_no = pub_no;
	}
	public String getBook_name() {
		return book_name;
	}
	public void setBook_name(String book_name) {
		this.book_name = book_name;
	}
	public String getBook_author() {
		return book_author;
	}
	public void setBook_author(String book_author) {
		this.book_author = book_author;
	}
	public String getBook_num() {
		return book_num;
	}
	public void setBook_num(String book_num) {
		this.book_num = book_num;
	}
	public String getBook_wz() {
		return book_wz;
	}
	public void setBook_wz(String book_wz) {
		this.book_wz = book_wz;
	}
	@Override
	public String toString() {
		return "book [book_no=" + book_no + ", pub_no=" + pub_no
				+ ", book_name=" + book_name + ", book_author=" + book_author
				+ ", book_num=" + book_num + ", book_wz=" + book_wz + "]";
	}
	
	
	
}
