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
							<h2 style="margin-bottom:40px;">Pilih Paket <?php echo $this->session->userdata('OP'); ?></h2>
						</center>
					</div>
					<div class="col-md-12">
						<div class="col-md-1"></div>
						<div class="col-md-10">
							<div class="row">
								<div class="col-md-6">
									<p>Harga Rp. 13.000</p>
									<a href="<?php echo base_url('Pulsa/KonfirmPaket'); ?>/13.000">
									<div class="panel panel-warning">
										<div class="panel-heading">
											<center>Harga Kuota 360MB - 600MB (sesuai zona terkait) + Bonus 1GB 4G.</center>
										</div>
									</div>
									</a>
								</div>
								<div class="col-md-6">
									<p>Harga Rp. 26.000</p>
									<a href="<?php echo base_url('Pulsa/KonfirmPaket'); ?>/26.000">
									<div class="panel panel-warning">
										<div class="panel-heading">
											<center>Harga Kuota 800MB - 1.5GB (sesuai zona terkait) + Bonus 5GB 4G.</center>
										</div>
									</div>
									</a>
								</div>
							</div>
							<div class="row">
								<div class="col-md-6">
									<p>Harga Rp. 51.000</p>
									<a href="<?php echo base_url('Pulsa/KonfirmPaket'); ?>/51.000">
									<div class="panel panel-warning">
										<div class="panel-heading">
											<center>Harga Kuota 2.5GB - 4.5GB (sesuai zona terkait) + Bonus 10GB 4G.</center>
										</div>
									</div>
									</a>
								</div>
								<div class="col-md-6">
									<p>Harga Rp. 101.000</p>
									<a href="<?php echo base_url('Pulsa/KonfirmPaket'); ?>/101.000">
									<div class="panel panel-warning">
										<div class="panel-heading">
											<center>Harga Kuota 4.5GB - 6.5GB (sesuai zona terkait) + Bonus 10GB 4G.</center>
										</div>
									</div>
									</a>
								</div>
							</div>
							<div class="row">
								<div class="col-md-6">
									<p>Harga Rp. 150.000</p>
									<a href="<?php echo base_url('Pulsa/KonfirmPaket'); ?>/150.000">
									<div class="panel panel-warning">
										<div class="panel-heading">
											<center>Harga Kuota 7 GB - 9GB (sesuai zona terkait) + Bonus 10GB 4G. </center>
										</div>
									</div>
									</a>
								</div>
							
							</div>
						</div>
						<div class="col-md-1"></div>
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