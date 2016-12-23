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
							<h2 style="margin-bottom:30px;">Konfirmasi Pembayaran Pelanggan</h2>
						</center>
					</div>
					<div class="col-md-12">
						<div class="col-md-1"></div>
						<div class="row">
							<div class="col-md-10 blue-light-nohover">
							<div class="panel panel-warning">
								<div class="panel-heading">
									<table class="table table-striped">
										<tr>
											<th>Jenis</th>
											<th>ID</th>
											<th>Tanggal</th>
											<th>Bayar</th>
											<th>Status</th>
											<th>Aksi</th>
										</tr>
										 <?php foreach($report as $post){?>
										<tr>
										<td><?php echo $post->Jenis;?></a></td>
										<td><?php echo $post->ID;?></td>
										<td><?php echo $post->Tanggal; ?></td>
										<td><?php echo $post->Bayar; ?></td>
										<td><?php echo $post->Status; ?></td>
										<td><?php 
											if($post->Status=="BelumBayar"){
											?><?php if($post->Jenis=="Game") { ?>
											<a href="<?php echo base_url('Admin/KonfirmGame?ID='.$post->ID.'&bayar='.$post->Bayar.'') ;?>">
											<?php } else  {?>
											<a href="<?php echo base_url('Admin/Konfirmasi/'.$post->ID.'') ;?>">
											<?php } ?>
											<button type="button" class="btn btn-primary">Konfirmasi</button>
											</a>
											<?php } else { ?>
											<button type="button" class="btn btn-success" disabled="disabled">Konfirmasi</button><?php } ?></td>
										</tr>     
										<?php }?>  
										
									</table>
								</div>
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