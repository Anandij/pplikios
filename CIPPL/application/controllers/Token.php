<?php
defined('BASEPATH') OR exit('No direct script access allowed');

class Token extends CI_Controller {

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
		$this->load->view('jenis_token');
	}
	public function Game()
	{
		$this->load->helper('url');
		$this->load->view('voucher_game');
	}
	public function Listrik()
	{
		$this->load->helper('url');
		$this->load->view('token_listrik');
	}
	public function PilihVoucher(){
		$num = $this->input->post('Nomor');
		echo $num;
		$newdata = array(
        'NUM'  => $num
		);
		$this->session->set_userdata($newdata);
		//$this->session->set_userdata($num);
		$this->load->view('voucher_listrik');
	}
	public function KonfirmGame(){
		//echo $this->input->get('harga');
		//echo $this->input->get('nom');
		$date = date('Y-m-d');
		$data = array(
  'Jenis' => 'Game',
  'Status' => 'BelumBayar',
  'Bayar' => $this->input->get('harga'),
  'Tanggal' => $date
  );
		$id = $this->SearchModel->submitData($data);
		
		echo $id;
		$this->data['harga'] = $this->input->get('harga');
		$this->data['nom'] = $this->input->get('nom');
		$this->data['ID'] = $id;
		$this->load->view('konfirmasi_game',$this->data);
	}
	public function KonfirmListrik(){
		
		$date = date('Y-m-d');
		$data = array(
  'Jenis' => 'Listrik',
  'Status' => 'BelumBayar',
  'Bayar' => $this->input->get('harga'),
  'Tanggal' => $date
  );
		$id = $this->SearchModel->submitData($data);
		echo $id;
		$this->data['harga'] = $this->input->get('harga');
		$this->data['nom'] = $this->input->get('nom');
		$this->data['ID'] = $id;
		$this->load->view('konfirmasi_listrik',$this->data);
	}
	public function Selamat(){
		$this->load->view('selamat');
	}
	
}
