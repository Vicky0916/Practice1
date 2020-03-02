package com.dao;

import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.List;

public class bookDao extends DataBase {
	
	
	public List<book> getAllbooks(String keyword)
	{
		List<book> list = new ArrayList<book>();
		
		try {
			Connection conn = getConnection();
			Statement smt = conn.createStatement();
			String sql="select * from book";
			if(!keyword.equals(""))
			{
				sql+=" where book_author like '%"+keyword+"%' ";
			}
			
			
			ResultSet rs =smt.executeQuery(sql);
			
			while(rs.next())
			{
				book b =new book();
				b.setBook_no(rs.getString("book_no"));
				b.setPub_no(rs.getString("Pub_no"));
				b.setBook_name(rs.getString("book_name"));
				b.setBook_author(rs.getString("book_author"));
				b.setBook_num(rs.getString("book_num"));
				b.setBook_wz(rs.getString("book_wz"));
				list.add(b);
			}
				
			
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return list;
	}
	
	public boolean addbook(book b)
	{
		boolean flag = false;
		
		try {
			Connection conn = getConnection();
			Statement smt = conn.createStatement();
			String sql="insert into Book(book_no,Pub_no,book_name,book_author,book_num,book_wz) values(";
			sql+="'"+b.getBook_no()+"',";
			sql+="'"+b.getPub_no()+"',";
			sql+="'"+b.getBook_name()+"',";
			sql+="'"+b.getBook_author()+"',";
			sql+="'"+b.getBook_num()+"',";
			sql+="'"+b.getBook_wz()+"')";
			
			int num = smt.executeUpdate(sql);
			if(num>0)
				flag = true;
			
		} catch (SQLException e) {
			
			e.printStackTrace();
		}
		
		return flag;
	}
	
	public boolean delbook(String book_no)
	{
		boolean flag = false;
		
		try {
			Connection conn = getConnection();
			Statement smt = conn.createStatement();
			String sql="delete from book where book_no='"+book_no+"'";
			
			int num = smt.executeUpdate(sql);
			if(num>0)
				flag = true;
		} catch (SQLException e) {
			
			e.printStackTrace();
		}
		
		return flag;
	}
	
	public book getOnebookBybook_no(String book_no)
	{
		book b =null;
		try {
			Connection conn = getConnection();
			Statement smt = conn.createStatement();
			String sql="select * from book where book_no='"+book_no+"'";
			
			
			ResultSet rs =smt.executeQuery(sql);
			
			if(rs.next())
			{
				b =new book();
				b.setBook_no(rs.getString("book_no"));
				b.setPub_no(rs.getString("Pub_no"));
				b.setBook_name(rs.getString("book_name"));
				b.setBook_author(rs.getString("book_author"));
				b.setBook_num(rs.getString("book_num"));
				b.setBook_wz(rs.getString("book_wz"));
				
			}
			
			
			
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return b;
	}
	
	public boolean updatebook(book b)
	{
		boolean flag = false;
		
		try {
			Connection conn = getConnection();
			Statement smt = conn.createStatement();
			String sql="update book set  ";
			
			sql+="Pub_no='"+b.getPub_no()+"',";
			sql+="Book_name='"+b.getBook_name()+"',";
			sql+="Book_author='"+b.getBook_author()+"',";
			sql+="Book_num='"+b.getBook_num()+"',";
			sql+="Book_wz='"+b.getBook_wz()+"'";
			sql+="  where book_no='"+b.getBook_no()+"'";
			int num = smt.executeUpdate(sql);
			if(num>0)
				flag = true;
			
		} catch (SQLException e) {
			
			e.printStackTrace();
		}
		
		return flag;
	}

}
