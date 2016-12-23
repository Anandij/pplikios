<?php
defined('BASEPATH') OR exit('No direct script access allowed');

class Admin extends CI_Controller {

	function __Construct(){
  parent::__Construct ();
  $this->load->helper('url');
   $this->load->database(); // 
   $this->load->model('AdminModel');
 }
 
 
	public function index()
	{
		$this->data['report'] = $this->AdminModel->getData(); 
		$this->load->view('admin',$this->data);
	}
	public function Konfirmasi()
	{
		$temp = $this->uri->segment(3); 
		$this->data['report'] = $this->AdminModel->confirm($temp);
		$this->index();
		
	}
	public function KonfirmGame()
	{
		$temp = $this->input->get('ID');
		$bayar = $this->input->get('bayar');
		$this->AdminModel->confirm($temp);
		$array = $this->AdminModel->getGame($bayar);
		echo "dsad";
		echo $array['Nomor_Voucher'];
		$this->data['Token']=$array['Nomor_Voucher'];
		$this->load->view('displayToken',$this->data);
		
		
	}
}
