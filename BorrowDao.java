package com.dao;

import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.List;

public class BorrowDao extends DataBase {
	
	
	public List<Borrow> getAllBorrows(String keyword)
	{
		List<Borrow> list = new ArrayList<Borrow>();
		
		try {
			Connection conn = getConnection();
			Statement smt = conn.createStatement();
			String sql="select * from Borrow";
			if(!keyword.equals(""))
			{
				sql+=" where rea_no like '%"+keyword+"%' ";
			}
			
			
			ResultSet rs =smt.executeQuery(sql);
			
			while(rs.next())
			{
				Borrow b =new Borrow();
				b.setRea_no(rs.getString("rea_no"));
				b.setBook_no(rs.getString("book_no"));
				b.setBor_date(rs.getString("bor_date"));
				b.setBor_gh(rs.getString("bor_gh"));
				list.add(b);
			}
				
			
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return list;
	}
	
	public boolean addBorrow(Borrow b)
	{
		boolean flag = false;
		
		try {
			Connection conn = getConnection();
			Statement smt = conn.createStatement();
			String sql="insert into Borrow(Rea_no,book_no,Bor_date,Bor_gh) values(";
			sql+="'"+b.getRea_no()+"',";
			sql+="'"+b.getBook_no()+"',";
			sql+="'"+b.getBor_date()+"',";
			sql+="'"+b.getBor_gh()+"')";
			
			int num = smt.executeUpdate(sql);
			if(num>0)
				flag = true;
			
		} catch (SQLException e) {
			
			e.printStackTrace();
		}
		
		return flag;
	}
	
	public Borrow getOneBorrowByrea_no(String rea_no)
	{
		Borrow b =null;
		try {
			Connection conn = getConnection();
			Statement smt = conn.createStatement();
			String sql="select * from Borrow where rea_no='"+rea_no+"'";
			
			
			ResultSet rs =smt.executeQuery(sql);
			
			if(rs.next())
			{
				b =new Borrow();
				b.setRea_no(rs.getString("rea_no"));
				b.setBook_no(rs.getString("book_no"));
				b.setBor_date(rs.getString("bor_date"));
				b.setBor_gh(rs.getString("bor_gh"));
			}
			
			
			
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return b;
	}
	public boolean delBorrow(String rea_no)
	{
		boolean flag = false;
		
		try {
			Connection conn = getConnection();
			Statement smt = conn.createStatement();
			String sql="delete from Borrow where rea_no='"+rea_no+"'";
			
			int num = smt.executeUpdate(sql);
			if(num>0)
				flag = true;
		} catch (SQLException e) {
			
			e.printStackTrace();
		}
		
		return flag;
	}
	
	public boolean updateBorrow(Borrow b)
	{
		boolean flag = false;
		
		try {
			Connection conn = getConnection();
			Statement smt = conn.createStatement();
			String sql="update Borrow set  ";
			
			sql+="Rea_no='"+b.getRea_no()+"',";
			sql+="book_no='"+b.getBook_no()+"',";
			sql+="Bor_date='"+b.getBor_date()+"',";
			sql+="Bor_gh='"+b.getBor_gh()+"'";
			
			sql+="  where Rea_no='"+b.getRea_no()+"'";
			int num = smt.executeUpdate(sql);
			if(num>0)
				flag = true;
			
		} catch (SQLException e) {
			
			e.printStackTrace();
		}
		
		return flag;
	}

}
