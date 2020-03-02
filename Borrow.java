package com.dao;

public class Borrow {
	private String Rea_no;
	private String book_no;
	private String Bor_date;
	private String Bor_gh;
	public String getRea_no() {
		return Rea_no;
	}
	public void setRea_no(String rea_no) {
		this.Rea_no = rea_no;
	}
	public String getBook_no() {
		return book_no;
	}
	public void setBook_no(String book_no) {
		this.book_no = book_no;
	}
	public String getBor_date() {
		return Bor_date;
	}
	public void setBor_date(String bor_date) {
		this.Bor_date = bor_date;
	}
	public String getBor_gh() {
		return Bor_gh;
	}
	public void setBor_gh(String bor_gh) {
		this.Bor_gh = bor_gh;
	}
}
