<?php
defined('BASEPATH') OR exit('No direct script access allowed');

class Pulsa extends CI_Controller {

	function __Construct(){
  parent::__Construct ();
  $this->load->library('session');
  $this->load->helper('url');
   $this->load->database(); // 
   $this->load->model('SearchModel');
 }
 
 
	public function index()
	{
		$this->load->helper('url');
		$this->load->view('ipulsa');
	}
	public function getNum()
	{
		$num=$this->input->post('Nomor');
		$result = substr($num, 0, 4);
		//echo $result;
		$OP = $this->SearchModel->getOP($result);
		//echo $OP[0]->Nama_Operator;
		if(!$OP){
			echo "There is no Such Number on our list of Operator Cellphone";
		}
		else {$newdata = array(
        'NUM'  => $num,
        'OP'     => $OP[0]->Nama_Operator
		);
		
		$this->session->set_userdata($newdata);
		//echo $this->session->userdata('OP');
		$this->load->view('jenis_pulsa');
		}
	}
	public function Reguler()
	{
		$this->load->view('regular');
	}
	public function Konfirm($harga)
	{
		 $date = date('Y-m-d');
		$data = array(
  'Jenis' => 'Pulsa Elektrik',
  'Status' => 'BelumBayar',
  'Bayar' => $harga,
  'Tanggal' => $date
  );
		$id = $this->SearchModel->submitData($data);
		echo $id;
		$this->data['temp'] = $harga;
		$this->data['ID'] = $id;
		$this->load->view('konfirmasi_regular',$this->data);
	}
		public function KonfirmPaket($harga)
	{
		 $date = date('Y-m-d');
		$data = array(
  'Jenis' => 'Paket Data',
  'Status' => 'BelumBayar',
  'Bayar' => $harga,
  'Tanggal' => $date
  );
		$id = $this->SearchModel->submitData($data);
		echo $id;
		$this->data['temp'] = $harga;
		$this->data['ID'] = $id;
		$this->load->view('konfirmasi_regular',$this->data);
	}
	
	
	public function Paket()
	{
		$this->load->view('paketdata');
	}
	public function Selamat(){
		$this->load->view('selamat');
	}
	
}
