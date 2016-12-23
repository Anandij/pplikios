<html lang="en">
<head>
	<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
	<meta charset="utf-8">
	<meta http-equiv="X-UA-Compatible" content="IE=edge">
	<meta name="viewport" content="width=device-width, initial-scale=1">
    <link href="<?php echo base_url(); ?>css/bootstrap.min.css" rel="stylesheet">
	<link rel="stylesheet" href="<?php echo base_url(); ?>stylekios.css">
	
	<title>i-kios</title>
</head>
<body background="<?php echo base_url(); ?>img/bg2.png">
	
	<div class="container">
		<div class="row" style="margin-top:60px;" >
			<div class="col-md-1"></div>
			<div class="col-md-10">
				<div class="welcome">
					<div class="row">
						<div class="col-md-4">
							<img src="<?php echo base_url(); ?>img/logo.png" style="/*clear: left;*/ /*float: left;*/ margin-bottom: 1em; /*margin-right: 1em;*/ height:100px; /*margin-right:200px;*/">
						</div>
						<div class="col-md-4">
						</div>
						<div class="col-md-4">
							<img src="<?php echo base_url(); ?>img/logo2.png" style="/*clear: left;*/ /*float: left;*/ margin-bottom: 1em; /*margin-right: 1em;*/ height:90px; /*margin-right:200px;*/">
						</div>
					</div>
				</div>
			</div>
			<div class="col-md-1"></div>
		</div>

		<div class="row" style="margin-top:30px;">
			<div class="col-md-1"></div>
			<div class="col-md-10">
				<div class="welcome">
					<div class="col-md-12">
						<center>
							<h2 style="margin-bottom:30px;">Konfirmasi Voucher Listrik</h2>
						</center>
					</div>
					<div class="col-md-12">
						<div class="col-md-3"></div>
						<div class="row">
							<div class="col-md-6 blue-light-nohover">
							<div class="panel panel-warning">
								<div class="panel-heading">
									<h3>Pembelian</h3>
									<p>Voucher Token Listrik <?php echo $nom; ?></p>
									<table>
										<tr>
											<td>ID Struk</td>
											<td>&nbsp;:&nbsp;&nbsp;</td>
											<td><?php  echo $ID  ;?></td>
										</tr>
										<tr>
											<td>Nomor Meteran</td>
											<td>&nbsp;:&nbsp;&nbsp;</td>
											<td><?php  echo $this->session->userdata('NUM');  ;?></td>
										</tr>
										<tr>
											<td>Harga</td>
											<td>&nbsp;:&nbsp;&nbsp;</td>
											<td><?php echo $harga; ?></td>
										</tr>
									</table>
									<p><br>Terima kasih anda telah memesan<br>
									pulsa elektronik pada I-KIOS Indomaret<br>
									Tekan tombol OK untuk cetak struk</p>
									<a href="<?php echo base_url("Token/Selamat"); ?>">
									<button type="button" class="btn btn-success">OK</button>
									</a>
								</div>
							</div>
							</div>
						</div>
						<div class="col-md-3"></div>
					</div>
				</div>
			</div>
			<div class="col-md-1"></div>
		</div>

	</div>

</body>
	<script src="<?php echo base_url(); ?>js/jquery.min.js"></script>
    <script src="<?php echo base_url(); ?>js/bootstrap.min.js"></script>
</html>