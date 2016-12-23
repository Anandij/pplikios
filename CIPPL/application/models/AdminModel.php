<?php
class AdminModel extends CI_Model {
  function getData(){
  $this->db->select("*"); 
  $this->db->from('admin');
  $query = $this->db->get();
  return $query->result();
 }
 function confirm($temp){
	 $data = array(
               'Status' => 'SudahDibayar'
            );
	 
	 
  $this->db->like('ID',$temp);
  $this->db->update('admin',$data);

 }
  function getGame($temp){
	$this->db->select("*"); 
	$this->db->from('voucher');
    $this->db->where('Harga', $temp );
	$this->db->where('Jenis', "Game" );
	$this->db->where('Status', "Belum_Terpakai" );
	$this->db->limit(1);
	$query = $this->db->get();
	
    if ( $query->num_rows() > 0 )
    {
        $row = $query->row_array();
        return $row;
    }


 }
 
}
?>