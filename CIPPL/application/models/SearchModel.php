<?php
class SearchModel extends CI_Model {
 
 function getOP($num){
  $this->db->select('Nama_Operator');
  $this->db->like('DigitAwal',$num);
  $query = $this->db->get('jenis_op');
  return $query->result();
 }
	function getData($OP){
  $this->db->select("*"); 
  $this->db->like('DigitAwal',$num);
  $this->db->from('report');
  $query = $this->db->get();
  return $query->result();
 }
 function submitData($data){
	 $this->db->insert('admin', $data);
	$insert_id = $this->db->insert_id();

	return  $insert_id;
 }
 
 
}
?>