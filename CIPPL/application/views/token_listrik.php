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
							<h2>Masukkan Nomer Meter-an PLN</h2>
						</center>
					</div>
					<div class="col-md-12">
						<div class="col-md-1"></div>
						<div class="col-md-10">
							<form class="form-horizontal" action="<?php echo base_url("Token/PilihVoucher"); ?>" method="post" role="form">
								<input type="text" class="form-control input-lg" placeholder="Nomor" name="Nomor" required>
								<center>
								<div class="form-group">
									<button type="submit" class="btn btn-danger btn-lg" style="margin-top: 20px;">OK</button>
									<button type="button" class="btn btn-danger btn-lg" style="margin-top: 20px;">Cancel</button>
								</div>
								</center>
							</form>
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