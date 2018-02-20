<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01//EN">
<!--+This is an example of a "sticky" non-SSI comment -->
<html>
<head>
	<title>/head/athena/Reconstruction/RecoTools/CaloClusterMatching/src/TopoClusterMap.cxx</title>
	<base href="http://acode-browser.usatlas.bnl.gov/lxr/">
	<link rel="stylesheet" type="text/css" href="templates/lxr.css">
	<link rel="alternate stylesheet" type="text/css" href="templates/classic.css" title="templates/classic">
	<link  rel="icon" type="image/x-icon" href="LXRimages/LXRlogo32.ico">
<script type="text/javascript">
function ensureFocus()
{
  if (document.getElementById("focus"))
	  {
	  document.getElementById("focus").focus();
	  }
}
</script>
</head>
<body onload="ensureFocus()">
<table class="header">
	<tr>
		<td class="leftmost">
			<a href="/">
<img	src="LXRimages/LXRlogo64.jpeg"
		alt="Back to home page"
		style="border: none"
>
			</a>
		</td>
		<td>
			<table class="header">
				<tr>
					<td>
						<h1 class="main">NEW IMPROVED US Atlas LXR Cross Reference of Nightly Git Clones</h1>
					</td>
				</tr>
				<tr>
					<td class="banner"><span class="banner"><a class='banner' href="/lxr/source/">head</a>/&#x200B;<a class='banner' href="/lxr/source/athena/">athena</a>/&#x200B;<a class='banner' href="/lxr/source/athena/Reconstruction/">Reconstruction</a>/&#x200B;<a class='banner' href="/lxr/source/athena/Reconstruction/RecoTools/">RecoTools</a>/&#x200B;<a class='banner' href="/lxr/source/athena/Reconstruction/RecoTools/CaloClusterMatching/">CaloClusterMatching</a>/&#x200B;<a class='banner' href="/lxr/source/athena/Reconstruction/RecoTools/CaloClusterMatching/src/">src</a>/&#x200B;<a class='banner' href="/lxr/source/athena/Reconstruction/RecoTools/CaloClusterMatching/src/TopoClusterMap.cxx">TopoClusterMap.cxx</a></span></td>
				</tr>
			</table>
		</td>
		<td class="rightmost">
			<form method="get" class="modes-sel" action="">
				<div class="compact">
					<button type="submit" disabled>Source navigation</button>
				</div>
			</form>
			<form method="get" class="modes" action="/lxr/diff/athena/Reconstruction/RecoTools/CaloClusterMatching/src/TopoClusterMap.cxx">
				<div class="compact">
					<button type="submit" >Diff markup</button>
				</div>
			</form>
			<form method="get" class="modes" action="/lxr/ident">
				<div class="compact">
					<button type="submit" >Identifier search</button>
				</div>
			</form>
			<form method="get" class="modes" action="/lxr/search">
				<div class="compact">
					<button type="submit" >General search</button>
				</div>
			</form>
		</td>
	</tr>
	<tr><td colspan='3'>&nbsp;</td></tr>
	<tr>
		<td>&nbsp;</td>
		<td colspan='2' class="rightmost">
			<form	method="get"
					class="vars"
					action="/lxr/source/athena/Reconstruction/RecoTools/CaloClusterMatching/src/TopoClusterMap.cxx">
				<p class="compact">
				&nbsp;<label>Version:
					<select name="!v" onchange="this.form.submit();">
						<option class="var-sel" selected>head</option>
						<option class="varlink" >21.3</option>
						<option class="varlink" >21.2</option>
						<option class="varlink" >21.1</option>
						<option class="varlink" >21.0</option>
					</select>
					</label>

				</p>
			</form>
		</td>
	</tr>
</table>
<hr>
<p class=indexstate>
File indexing completed on 2018-02-18 22:55:57
</p>
<pre class="filecontent">
<a class='fline' name="0001">0001</a> <span class="comment">/*</span>
<a class='fline' name="0002">0002</a> <span class="comment">  Copyright (C) 2002-2017 CERN for the benefit of the ATLAS collaboration</span>
<a class='fline' name="0003">0003</a> <span class="comment">*/</span>
<a class='fline' name="0004">0004</a> 
<a class='fline' name="0005">0005</a> <span class='reserved'>#include</span> "<a class='include' href="/lxr/source/athena/Reconstruction/RecoTools/CaloClusterMatching/src/TopoClusterMap.h">TopoClusterMap.h</a>"
<a class='fline' name="0006">0006</a> 
<a class='fline' name="0007">0007</a> <span class='reserved'>#include</span> "xAODCaloEvent/<a class='include' href="/lxr/source/athena/Event/xAOD/xAODCaloEvent/xAODCaloEvent/CaloCluster.h">CaloCluster.h</a>"
<a class='fline' name="0008">0008</a> <span class='reserved'>#include</span> "xAODCaloEvent/<a class='include' href="/lxr/source/athena/Event/xAOD/xAODCaloEvent/xAODCaloEvent/CaloClusterKineHelper.h">CaloClusterKineHelper.h</a>"
<a class='fline' name="0009">0009</a> 
<a class='fline' name="0010">0010</a> <span class='reserved'>bool</span> <a class='fid' href="/lxr/ident?_i=CompareClusterET">CompareClusterET</a> (<span class='reserved'>const</span> <a class='fid' href="/lxr/ident?_i=xAOD">xAOD</a>::<a class='fid' href="/lxr/ident?_i=CaloCluster">CaloCluster</a>* <a class='fid' href="/lxr/ident?_i=c1">c1</a>, <span class='reserved'>const</span> <a class='fid' href="/lxr/ident?_i=xAOD">xAOD</a>::<a class='fid' href="/lxr/ident?_i=CaloCluster">CaloCluster</a>* <a class='fid' href="/lxr/ident?_i=c2">c2</a>) 
<a class='fline' name="0011">0011</a> {
<a class='fline' name="0012">0012</a> 
<a class='fline' name="0013">0013</a>   <span class='reserved'>double</span> <a class='fid' href="/lxr/ident?_i=Et1">Et1</a>(<a class='fid' href="/lxr/ident?_i=c1">c1</a>-&gt;<a class='fid' href="/lxr/ident?_i=e">e</a>()/<a class='fid' href="/lxr/ident?_i=cosh">cosh</a>(<a class='fid' href="/lxr/ident?_i=c1">c1</a>-&gt;<a class='fid' href="/lxr/ident?_i=eta">eta</a>())), <a class='fid' href="/lxr/ident?_i=Et2">Et2</a>(<a class='fid' href="/lxr/ident?_i=c2">c2</a>-&gt;<a class='fid' href="/lxr/ident?_i=e">e</a>()/<a class='fid' href="/lxr/ident?_i=cosh">cosh</a>(<a class='fid' href="/lxr/ident?_i=c2">c2</a>-&gt;<a class='fid' href="/lxr/ident?_i=eta">eta</a>()));
<a class='fline' name="0014">0014</a>   <span class='reserved'>return</span> <a class='fid' href="/lxr/ident?_i=Et1">Et1</a> &gt; <a class='fid' href="/lxr/ident?_i=Et2">Et2</a>;
<a class='fline' name="0015">0015</a> 
<a class='fline' name="0016">0016</a> }
<a class='fline' name="0017">0017</a> 
<a class='fline' name="0018">0018</a> <span class="comment">//////////////////////////////////////////////////</span>
<a class='fline' name="0019">0019</a> <span class="comment">//Athena interfaces.</span>
<a class='fline' name="0020">0020</a> <span class="comment">//////////////////////////////////////////////////</span>
<a class='fline' name="0021">0021</a> 
<a class='fline' name="0022">0022</a> <span class="comment">//Constructor.</span>
<a class='fline' name="0023">0023</a> <a class='fid' href="/lxr/ident?_i=TopoClusterMap">TopoClusterMap</a>::<a class='fid' href="/lxr/ident?_i=TopoClusterMap">TopoClusterMap</a>(<span class='reserved'>float</span> <a class='fid' href="/lxr/ident?_i=minEta">minEta</a>, <span class='reserved'>float</span> <a class='fid' href="/lxr/ident?_i=minPhi">minPhi</a>, <span class='reserved'>float</span> <a class='fid' href="/lxr/ident?_i=maxEta">maxEta</a>, <span class='reserved'>float</span> <a class='fid' href="/lxr/ident?_i=maxPhi">maxPhi</a>,
<a class='fline' name="0024">0024</a>                    <span class='reserved'>float</span> <a class='fid' href="/lxr/ident?_i=dEta">dEta</a>, <span class='reserved'>float</span> <a class='fid' href="/lxr/ident?_i=dPhi">dPhi</a>)
<a class='fline' name="0025">0025</a> {
<a class='fline' name="0026">0026</a>   <a class='fid' href="/lxr/ident?_i=m_minEta">m_minEta</a> = <a class='fid' href="/lxr/ident?_i=minEta">minEta</a>;
<a class='fline' name="0027">0027</a>   <a class='fid' href="/lxr/ident?_i=m_minPhi">m_minPhi</a> = <a class='fid' href="/lxr/ident?_i=minPhi">minPhi</a>;
<a class='fline' name="0028">0028</a>   <a class='fid' href="/lxr/ident?_i=m_maxEta">m_maxEta</a> = <a class='fid' href="/lxr/ident?_i=maxEta">maxEta</a>;
<a class='fline' name="0029">0029</a>   <a class='fid' href="/lxr/ident?_i=m_maxPhi">m_maxPhi</a> = <a class='fid' href="/lxr/ident?_i=maxPhi">maxPhi</a>;
<a class='fline' name="0030">0030</a>   <a class='fid' href="/lxr/ident?_i=m_dEta">m_dEta</a> = <a class='fid' href="/lxr/ident?_i=dEta">dEta</a>;
<a class='fline' name="0031">0031</a>   <a class='fid' href="/lxr/ident?_i=m_dPhi">m_dPhi</a> = <a class='fid' href="/lxr/ident?_i=dPhi">dPhi</a>;
<a class='fline' name="0032">0032</a> }
<a class='fline' name="0033">0033</a> 
<a class='fline' name="0034">0034</a> <span class="comment">//Destructor.</span>
<a class='fline' name="0035">0035</a> <a class='fid' href="/lxr/ident?_i=TopoClusterMap">TopoClusterMap</a>::<a class='fid' href="/lxr/ident?_i=~TopoClusterMap">~TopoClusterMap</a>() {}
<a class='fline' name="0036">0036</a> 
<a class='fline' name="0037">0037</a> <span class="comment">//////////////////////////////////////////////////</span>
<a class='fline' name="0038">0038</a> <span class="comment">//Functional routines.</span>
<a class='fline' name="0039">0039</a> <span class="comment">//////////////////////////////////////////////////</span>
<a class='fline' name="0040">0040</a> 
<a class='fline' name="0041">0041</a> <a class='fid' href="/lxr/ident?_i=StatusCode">StatusCode</a> <a class='fid' href="/lxr/ident?_i=TopoClusterMap">TopoClusterMap</a>::<a class='fid' href="/lxr/ident?_i=SetTopoClusters">SetTopoClusters</a>(<span class='reserved'>const</span> <a class='fid' href="/lxr/ident?_i=xAOD">xAOD</a>::<a class='fid' href="/lxr/ident?_i=CaloClusterContainer">CaloClusterContainer</a> *inputTopoClusterContainer) 
<a class='fline' name="0042">0042</a> 
<a class='fline' name="0043">0043</a> {
<a class='fline' name="0044">0044</a> 
<a class='fline' name="0045">0045</a>   <span class='reserved'>double</span> <a class='fid' href="/lxr/ident?_i=eta">eta</a>, <a class='fid' href="/lxr/ident?_i=phi">phi</a>;
<a class='fline' name="0046">0046</a>   <span class='reserved'>int</span> <a class='fid' href="/lxr/ident?_i=i">i</a>(-1);
<a class='fline' name="0047">0047</a> 
<a class='fline' name="0048">0048</a>   <span class='reserved'>for</span>(<span class='reserved'>const</span> <span class='reserved'>auto</span>&amp; <a class='fid' href="/lxr/ident?_i=cc">cc</a> : *inputTopoClusterContainer) 
<a class='fline' name="0049">0049</a>   {
<a class='fline' name="0050">0050</a>     <a class='fid' href="/lxr/ident?_i=i">i</a>++;
<a class='fline' name="0051">0051</a>     <span class="comment">//Retrieve eta, phi from ith topocluster.</span>
<a class='fline' name="0052">0052</a>     <a class='fid' href="/lxr/ident?_i=eta">eta</a> = <a class='fid' href="/lxr/ident?_i=cc">cc</a>-&gt;<a class='fid' href="/lxr/ident?_i=eta">eta</a>();
<a class='fline' name="0053">0053</a>     <a class='fid' href="/lxr/ident?_i=phi">phi</a> = <a class='fid' href="/lxr/ident?_i=cc">cc</a>-&gt;<a class='fid' href="/lxr/ident?_i=phi">phi</a>();
<a class='fline' name="0054">0054</a> 
<a class='fline' name="0055">0055</a>     <span class="comment">//Put it in appropriate vector.</span>
<a class='fline' name="0056">0056</a>     <a class='fid' href="/lxr/ident?_i=m_map">m_map</a>[<a class='fid' href="/lxr/ident?_i=GetEtaPhiKeys">GetEtaPhiKeys</a>(<a class='fid' href="/lxr/ident?_i=eta">eta</a>,<a class='fid' href="/lxr/ident?_i=phi">phi</a>).<a class='fid' href="/lxr/ident?_i=first">first</a>][<a class='fid' href="/lxr/ident?_i=GetEtaPhiKeys">GetEtaPhiKeys</a>(<a class='fid' href="/lxr/ident?_i=eta">eta</a>,<a class='fid' href="/lxr/ident?_i=phi">phi</a>).<a class='fid' href="/lxr/ident?_i=second">second</a>].<a class='fid' href="/lxr/ident?_i=push_back">push_back</a>(<a class='fid' href="/lxr/ident?_i=cc">cc</a>);
<a class='fline' name="0057">0057</a>   }
<a class='fline' name="0058">0058</a> 
<a class='fline' name="0059">0059</a>   <a class='fid' href="/lxr/ident?_i=SortGridVectors">SortGridVectors</a>();
<a class='fline' name="0060">0060</a> 
<a class='fline' name="0061">0061</a>   <span class='reserved'>return</span> <a class='fid' href="/lxr/ident?_i=StatusCode">StatusCode</a>::<a class='fid' href="/lxr/ident?_i=SUCCESS">SUCCESS</a>;
<a class='fline' name="0062">0062</a> }
<a class='fline' name="0063">0063</a> 
<a class='fline' name="0064">0064</a> <span class='reserved'>void</span> <a class='fid' href="/lxr/ident?_i=TopoClusterMap">TopoClusterMap</a>::<a class='fid' href="/lxr/ident?_i=InsertTopoCluster">InsertTopoCluster</a>(<a class='fid' href="/lxr/ident?_i=xAOD">xAOD</a>::<a class='fid' href="/lxr/ident?_i=CaloCluster">CaloCluster</a>* <a class='fid' href="/lxr/ident?_i=topo">topo</a>) {
<a class='fline' name="0065">0065</a> 
<a class='fline' name="0066">0066</a>   <span class="comment">//Retrieve eta, phi from ith topocluster.</span>
<a class='fline' name="0067">0067</a>   <span class='reserved'>double</span> <a class='fid' href="/lxr/ident?_i=eta">eta</a>(<a class='fid' href="/lxr/ident?_i=topo">topo</a>-&gt;<a class='fid' href="/lxr/ident?_i=phi">phi</a>()), <a class='fid' href="/lxr/ident?_i=phi">phi</a>(<a class='fid' href="/lxr/ident?_i=topo">topo</a>-&gt;<a class='fid' href="/lxr/ident?_i=phi">phi</a>());
<a class='fline' name="0068">0068</a> 
<a class='fline' name="0069">0069</a>   <span class="comment">//Put it in appropriate vector.</span>
<a class='fline' name="0070">0070</a>   <a class='fid' href="/lxr/ident?_i=m_map">m_map</a>.<a class='fid' href="/lxr/ident?_i=at">at</a>(<a class='fid' href="/lxr/ident?_i=GetEtaPhiKeys">GetEtaPhiKeys</a>(<a class='fid' href="/lxr/ident?_i=eta">eta</a>,<a class='fid' href="/lxr/ident?_i=phi">phi</a>).<a class='fid' href="/lxr/ident?_i=first">first</a>).<a class='fid' href="/lxr/ident?_i=at">at</a>(<a class='fid' href="/lxr/ident?_i=GetEtaPhiKeys">GetEtaPhiKeys</a>(<a class='fid' href="/lxr/ident?_i=eta">eta</a>,<a class='fid' href="/lxr/ident?_i=phi">phi</a>).<a class='fid' href="/lxr/ident?_i=second">second</a>).<a class='fid' href="/lxr/ident?_i=push_back">push_back</a>(<a class='fid' href="/lxr/ident?_i=topo">topo</a>);
<a class='fline' name="0071">0071</a> 
<a class='fline' name="0072">0072</a>   <span class="comment">//Re-sort the vector according to Et.</span>
<a class='fline' name="0073">0073</a>   <a class='fid' href="/lxr/ident?_i=SortGridVector">SortGridVector</a>(<a class='fid' href="/lxr/ident?_i=GetEtaPhiKeys">GetEtaPhiKeys</a>(<a class='fid' href="/lxr/ident?_i=eta">eta</a>,<a class='fid' href="/lxr/ident?_i=phi">phi</a>).<a class='fid' href="/lxr/ident?_i=first">first</a>, <a class='fid' href="/lxr/ident?_i=GetEtaPhiKeys">GetEtaPhiKeys</a>(<a class='fid' href="/lxr/ident?_i=eta">eta</a>,<a class='fid' href="/lxr/ident?_i=phi">phi</a>).<a class='fid' href="/lxr/ident?_i=second">second</a>);
<a class='fline' name="0074">0074</a>   
<a class='fline' name="0075">0075</a> }
<a class='fline' name="0076">0076</a> 
<a class='fline' name="0077">0077</a> <span class="comment">//Boolean comparison somewhere here that sorts vectors in grid by Et.</span>
<a class='fline' name="0078">0078</a> <span class='reserved'>void</span> <a class='fid' href="/lxr/ident?_i=TopoClusterMap">TopoClusterMap</a>::<a class='fid' href="/lxr/ident?_i=SortGridVectors">SortGridVectors</a>() {
<a class='fline' name="0079">0079</a>   
<a class='fline' name="0080">0080</a>   <span class='reserved'>for</span> (<span class='reserved'>int</span> <a class='fid' href="/lxr/ident?_i=i">i</a> = 0; <a class='fid' href="/lxr/ident?_i=i">i</a> &lt;= (<a class='fid' href="/lxr/ident?_i=GetEtaPhiKeys">GetEtaPhiKeys</a>(<a class='fid' href="/lxr/ident?_i=m_maxEta">m_maxEta</a>, <a class='fid' href="/lxr/ident?_i=m_maxPhi">m_maxPhi</a>).<a class='fid' href="/lxr/ident?_i=first">first</a>); <a class='fid' href="/lxr/ident?_i=i">i</a>++)
<a class='fline' name="0081">0081</a>     <span class='reserved'>for</span> (<span class='reserved'>int</span> <a class='fid' href="/lxr/ident?_i=j">j</a> = 0; <a class='fid' href="/lxr/ident?_i=j">j</a> &lt;= (<a class='fid' href="/lxr/ident?_i=GetEtaPhiKeys">GetEtaPhiKeys</a>(<a class='fid' href="/lxr/ident?_i=m_maxEta">m_maxEta</a>, <a class='fid' href="/lxr/ident?_i=m_maxPhi">m_maxPhi</a>).<a class='fid' href="/lxr/ident?_i=second">second</a>); <a class='fid' href="/lxr/ident?_i=j">j</a>++)
<a class='fline' name="0082">0082</a>       <a class='fid' href="/lxr/ident?_i=SortGridVector">SortGridVector</a>(<a class='fid' href="/lxr/ident?_i=i">i</a>,<a class='fid' href="/lxr/ident?_i=j">j</a>);
<a class='fline' name="0083">0083</a> 
<a class='fline' name="0084">0084</a> }
<a class='fline' name="0085">0085</a> 
<a class='fline' name="0086">0086</a> <span class='reserved'>void</span> <a class='fid' href="/lxr/ident?_i=TopoClusterMap">TopoClusterMap</a>::<a class='fid' href="/lxr/ident?_i=SortGridVector">SortGridVector</a>(<span class='reserved'>int</span> <a class='fid' href="/lxr/ident?_i=eta_key">eta_key</a>, <span class='reserved'>int</span> <a class='fid' href="/lxr/ident?_i=phi_key">phi_key</a>) {
<a class='fline' name="0087">0087</a> 
<a class='fline' name="0088">0088</a>   <span class='reserved'>if</span> (<a class='fid' href="/lxr/ident?_i=m_map">m_map</a>[<a class='fid' href="/lxr/ident?_i=eta_key">eta_key</a>][<a class='fid' href="/lxr/ident?_i=phi_key">phi_key</a>].<a class='fid' href="/lxr/ident?_i=size">size</a>()&gt;0) 
<a class='fline' name="0089">0089</a>     <a class='fid' href="/lxr/ident?_i=sort">sort</a>( <a class='fid' href="/lxr/ident?_i=m_map">m_map</a>[<a class='fid' href="/lxr/ident?_i=eta_key">eta_key</a>][<a class='fid' href="/lxr/ident?_i=phi_key">phi_key</a>].<a class='fid' href="/lxr/ident?_i=begin">begin</a>(), <a class='fid' href="/lxr/ident?_i=m_map">m_map</a>[<a class='fid' href="/lxr/ident?_i=eta_key">eta_key</a>][<a class='fid' href="/lxr/ident?_i=phi_key">phi_key</a>].<a class='fid' href="/lxr/ident?_i=end">end</a>(), <a class='fid' href="/lxr/ident?_i=CompareClusterET">CompareClusterET</a> );
<a class='fline' name="0090">0090</a> }
<a class='fline' name="0091">0091</a> 
<a class='fline' name="0092">0092</a> <span class='reserved'>void</span> <a class='fid' href="/lxr/ident?_i=TopoClusterMap">TopoClusterMap</a>::<a class='fid' href="/lxr/ident?_i=ClearMap">ClearMap</a>() {
<a class='fline' name="0093">0093</a> 
<a class='fline' name="0094">0094</a>   <span class='reserved'>for</span> (<span class='reserved'>int</span> <a class='fid' href="/lxr/ident?_i=i">i</a> = 0; <a class='fid' href="/lxr/ident?_i=i">i</a> &lt;= (<a class='fid' href="/lxr/ident?_i=GetEtaPhiKeys">GetEtaPhiKeys</a>(<a class='fid' href="/lxr/ident?_i=m_maxEta">m_maxEta</a>, <a class='fid' href="/lxr/ident?_i=m_maxPhi">m_maxPhi</a>).<a class='fid' href="/lxr/ident?_i=first">first</a>); <a class='fid' href="/lxr/ident?_i=i">i</a>++)
<a class='fline' name="0095">0095</a>     <span class='reserved'>for</span> (<span class='reserved'>int</span> <a class='fid' href="/lxr/ident?_i=j">j</a> = 0; <a class='fid' href="/lxr/ident?_i=j">j</a> &lt;= (<a class='fid' href="/lxr/ident?_i=GetEtaPhiKeys">GetEtaPhiKeys</a>(<a class='fid' href="/lxr/ident?_i=m_maxEta">m_maxEta</a>, <a class='fid' href="/lxr/ident?_i=m_maxPhi">m_maxPhi</a>).<a class='fid' href="/lxr/ident?_i=second">second</a>); <a class='fid' href="/lxr/ident?_i=j">j</a>++)
<a class='fline' name="0096">0096</a>       <a class='fid' href="/lxr/ident?_i=m_map">m_map</a>[<a class='fid' href="/lxr/ident?_i=i">i</a>][<a class='fid' href="/lxr/ident?_i=j">j</a>].<a class='fid' href="/lxr/ident?_i=clear">clear</a>();
<a class='fline' name="0097">0097</a> }
<a class='fline' name="0098">0098</a> 
<a class='fline' name="0099">0099</a> <span class="comment">// void TopoClusterMap::DumpMapContents() {</span>
<a class='fline' name="0100">0100</a> 
<a class='fline' name="0101">0101</a> <span class="comment">//   for (int i = 0; i &lt;= (GetEtaPhiKeys(m_maxEta, m_maxPhi).first); i++)</span>
<a class='fline' name="0102">0102</a> <span class="comment">//     for (int j = 0; j &lt;= (GetEtaPhiKeys(m_maxEta, m_maxPhi).second); j++) {</span>
<a class='fline' name="0103">0103</a> <span class="comment">//       ATH_MSG_DEBUG("Size of topocluster vector at (" &lt;&lt; i &lt;&lt; "," &lt;&lt; j &lt;&lt; "): " &lt;&lt; m_map[i][j].size());</span>
<a class='fline' name="0104">0104</a> <span class="comment">//       if (m_map[i][j].size()) {</span>
<a class='fline' name="0105">0105</a> <span class="comment">//  ATH_MSG_DEBUG("Contents of vector:");</span>
<a class='fline' name="0106">0106</a> <span class="comment">//  for (unsigned int k = 0; k &lt; m_map[i][j].size(); k++) {</span>
<a class='fline' name="0107">0107</a> <span class="comment">//    //ATH_MSG_DEBUG("E: %f, eta: %f, phi: %f, Pt: %f \n",(m_map[i][j])[k]-&gt;e(), (m_map[i][j])[k]-&gt;eta(), (m_map[i][j])[k]-&gt;phi(), (m_map[i][j])[k]-&gt;pt());</span>
<a class='fline' name="0108">0108</a> <span class="comment">//    ATH_MSG_DEBUG("E: " &lt;&lt; (m_map[i][j])[k]-&gt;e()</span>
<a class='fline' name="0109">0109</a> <span class="comment">//          &lt;&lt; ", eta: "     &lt;&lt; (m_map[i][j])[k]-&gt;eta()</span>
<a class='fline' name="0110">0110</a> <span class="comment">//          &lt;&lt; ", phi: "     &lt;&lt; (m_map[i][j])[k]-&gt;phi()</span>
<a class='fline' name="0111">0111</a> <span class="comment">//          &lt;&lt; ", Pt:  "     &lt;&lt; (m_map[i][j])[k]-&gt;pt());</span>
<a class='fline' name="0112">0112</a> <span class="comment">//  }</span>
<a class='fline' name="0113">0113</a> <span class="comment">//       }</span>
<a class='fline' name="0114">0114</a> <span class="comment">//     }</span>
<a class='fline' name="0115">0115</a>     
<a class='fline' name="0116">0116</a> 
<a class='fline' name="0117">0117</a> <span class="comment">// }</span>
<a class='fline' name="0118">0118</a> 
<a class='fline' name="0119">0119</a> <span class="comment">//Routine to retrieve vector of TopoClusters for a given cluster Pt.</span>
<a class='fline' name="0120">0120</a> <a class='fid' href="/lxr/ident?_i=std">std</a>::<a class='fid' href="/lxr/ident?_i=vector">vector</a>&lt;<span class='reserved'>const</span> <a class='fid' href="/lxr/ident?_i=xAOD">xAOD</a>::<a class='fid' href="/lxr/ident?_i=CaloCluster">CaloCluster</a>*&gt; <a class='fid' href="/lxr/ident?_i=TopoClusterMap">TopoClusterMap</a>::<a class='fid' href="/lxr/ident?_i=RetrieveTopoClusters">RetrieveTopoClusters</a>(<span class='reserved'>double</span> <a class='fid' href="/lxr/ident?_i=eta">eta</a>, 
<a class='fline' name="0121">0121</a>                                        <span class='reserved'>double</span> <a class='fid' href="/lxr/ident?_i=phi">phi</a>,
<a class='fline' name="0122">0122</a>                                        <span class='reserved'>double</span> <a class='fid' href="/lxr/ident?_i=Pt">Pt</a>) <span class='reserved'>const</span>
<a class='fline' name="0123">0123</a> {
<a class='fline' name="0124">0124</a> 
<a class='fline' name="0125">0125</a>   <span class='reserved'>if</span> ((<a class='fid' href="/lxr/ident?_i=Pt">Pt</a> * 1<a class='fid' href="/lxr/ident?_i=e">e</a>-3) &lt; 15) {
<a class='fline' name="0126">0126</a>     <span class='reserved'>return</span> <a class='fid' href="/lxr/ident?_i=RetrieveTopoClusters">RetrieveTopoClusters</a>(<a class='fid' href="/lxr/ident?_i=eta">eta</a>, <a class='fid' href="/lxr/ident?_i=phi">phi</a>, 0.2, 0.2);
<a class='fline' name="0127">0127</a>   } 
<a class='fline' name="0128">0128</a>   <span class='reserved'>else</span> <span class='reserved'>if</span> ((<a class='fid' href="/lxr/ident?_i=Pt">Pt</a> * 1<a class='fid' href="/lxr/ident?_i=e">e</a>-3) &lt; 50) {
<a class='fline' name="0129">0129</a>     <span class='reserved'>return</span> <a class='fid' href="/lxr/ident?_i=RetrieveTopoClusters">RetrieveTopoClusters</a>(<a class='fid' href="/lxr/ident?_i=eta">eta</a>, <a class='fid' href="/lxr/ident?_i=phi">phi</a>, 0.2, 0.4);
<a class='fline' name="0130">0130</a>   }
<a class='fline' name="0131">0131</a>   <span class='reserved'>else</span> {
<a class='fline' name="0132">0132</a>     <span class='reserved'>return</span> <a class='fid' href="/lxr/ident?_i=RetrieveTopoClusters">RetrieveTopoClusters</a>(<a class='fid' href="/lxr/ident?_i=eta">eta</a>, <a class='fid' href="/lxr/ident?_i=phi">phi</a>, 0.2, 0.6);
<a class='fline' name="0133">0133</a>   }
<a class='fline' name="0134">0134</a> 
<a class='fline' name="0135">0135</a> }
<a class='fline' name="0136">0136</a> 
<a class='fline' name="0137">0137</a> 
<a class='fline' name="0138">0138</a> <span class="comment">//Routine to retrieve vector of TopoClusters for a given (eta, phi) region.</span>
<a class='fline' name="0139">0139</a> <a class='fid' href="/lxr/ident?_i=std">std</a>::<a class='fid' href="/lxr/ident?_i=vector">vector</a>&lt;<span class='reserved'>const</span> <a class='fid' href="/lxr/ident?_i=xAOD">xAOD</a>::<a class='fid' href="/lxr/ident?_i=CaloCluster">CaloCluster</a>*&gt; <a class='fid' href="/lxr/ident?_i=TopoClusterMap">TopoClusterMap</a>::<a class='fid' href="/lxr/ident?_i=RetrieveTopoClusters">RetrieveTopoClusters</a>(<span class='reserved'>double</span> <a class='fid' href="/lxr/ident?_i=eta">eta</a>, <span class='reserved'>double</span> <a class='fid' href="/lxr/ident?_i=phi">phi</a>,
<a class='fline' name="0140">0140</a>                                        <span class='reserved'>double</span> <a class='fid' href="/lxr/ident?_i=dEta">dEta</a>,
<a class='fline' name="0141">0141</a>                                        <span class='reserved'>double</span> <a class='fid' href="/lxr/ident?_i=dPhi">dPhi</a>) <span class='reserved'>const</span>
<a class='fline' name="0142">0142</a> {
<a class='fline' name="0143">0143</a>   
<a class='fline' name="0144">0144</a>   <a class='fid' href="/lxr/ident?_i=std">std</a>::<a class='fid' href="/lxr/ident?_i=vector">vector</a>&lt;<span class='reserved'>const</span> <a class='fid' href="/lxr/ident?_i=xAOD">xAOD</a>::<a class='fid' href="/lxr/ident?_i=CaloCluster">CaloCluster</a>*&gt; <a class='fid' href="/lxr/ident?_i=clusters">clusters</a>;
<a class='fline' name="0145">0145</a> 
<a class='fline' name="0146">0146</a>   <span class="comment">//Need to be able to search within a broad window, then merge all vectors</span>
<a class='fline' name="0147">0147</a>   <span class="comment">//within that window together.</span>
<a class='fline' name="0148">0148</a>   <span class='reserved'>if</span> (<a class='fid' href="/lxr/ident?_i=dEta">dEta</a> &gt; 0. &amp;&amp; <a class='fid' href="/lxr/ident?_i=dPhi">dPhi</a> &gt; 0.) {
<a class='fline' name="0149">0149</a>     
<a class='fline' name="0150">0150</a>     <a class='fid' href="/lxr/ident?_i=std">std</a>::<a class='fid' href="/lxr/ident?_i=pair">pair</a>&lt;<span class='reserved'>double</span>,<span class='reserved'>double</span>&gt; <a class='fid' href="/lxr/ident?_i=lower_keys">lower_keys</a> = <a class='fid' href="/lxr/ident?_i=GetEtaPhiKeys">GetEtaPhiKeys</a>(<a class='fid' href="/lxr/ident?_i=eta">eta</a>-(<a class='fid' href="/lxr/ident?_i=dEta">dEta</a>/2.), <a class='fid' href="/lxr/ident?_i=phi">phi</a>-(<a class='fid' href="/lxr/ident?_i=dPhi">dPhi</a>/2.));
<a class='fline' name="0151">0151</a>     <a class='fid' href="/lxr/ident?_i=std">std</a>::<a class='fid' href="/lxr/ident?_i=pair">pair</a>&lt;<span class='reserved'>double</span>,<span class='reserved'>double</span>&gt; <a class='fid' href="/lxr/ident?_i=upper_keys">upper_keys</a> = <a class='fid' href="/lxr/ident?_i=GetEtaPhiKeys">GetEtaPhiKeys</a>(<a class='fid' href="/lxr/ident?_i=eta">eta</a>+(<a class='fid' href="/lxr/ident?_i=dEta">dEta</a>/2.), <a class='fid' href="/lxr/ident?_i=phi">phi</a>+(<a class='fid' href="/lxr/ident?_i=dPhi">dPhi</a>/2.));
<a class='fline' name="0152">0152</a> 
<a class='fline' name="0153">0153</a>     <span class='reserved'>for</span> (<span class='reserved'>int</span> <a class='fid' href="/lxr/ident?_i=ieta">ieta</a> = <a class='fid' href="/lxr/ident?_i=lower_keys">lower_keys</a>.<a class='fid' href="/lxr/ident?_i=first">first</a>; <a class='fid' href="/lxr/ident?_i=ieta">ieta</a> &lt;= <a class='fid' href="/lxr/ident?_i=upper_keys">upper_keys</a>.<a class='fid' href="/lxr/ident?_i=first">first</a>; <a class='fid' href="/lxr/ident?_i=ieta">ieta</a>++)
<a class='fline' name="0154">0154</a>       <span class='reserved'>for</span> (<span class='reserved'>int</span> <a class='fid' href="/lxr/ident?_i=iphi">iphi</a> = <a class='fid' href="/lxr/ident?_i=lower_keys">lower_keys</a>.<a class='fid' href="/lxr/ident?_i=second">second</a>; <a class='fid' href="/lxr/ident?_i=iphi">iphi</a> &lt;= <a class='fid' href="/lxr/ident?_i=upper_keys">upper_keys</a>.<a class='fid' href="/lxr/ident?_i=second">second</a>; <a class='fid' href="/lxr/ident?_i=iphi">iphi</a>++)
<a class='fline' name="0155">0155</a>     <a class='fid' href="/lxr/ident?_i=clusters">clusters</a>.<a class='fid' href="/lxr/ident?_i=insert">insert</a>(<a class='fid' href="/lxr/ident?_i=clusters">clusters</a>.<a class='fid' href="/lxr/ident?_i=end">end</a>(), <a class='fid' href="/lxr/ident?_i=m_map">m_map</a>.<a class='fid' href="/lxr/ident?_i=at">at</a>(<a class='fid' href="/lxr/ident?_i=ieta">ieta</a>).<a class='fid' href="/lxr/ident?_i=at">at</a>(<a class='fid' href="/lxr/ident?_i=iphi">iphi</a>).<a class='fid' href="/lxr/ident?_i=begin">begin</a>(), <a class='fid' href="/lxr/ident?_i=m_map">m_map</a>.<a class='fid' href="/lxr/ident?_i=at">at</a>(<a class='fid' href="/lxr/ident?_i=ieta">ieta</a>).<a class='fid' href="/lxr/ident?_i=at">at</a>(<a class='fid' href="/lxr/ident?_i=iphi">iphi</a>).<a class='fid' href="/lxr/ident?_i=end">end</a>());
<a class='fline' name="0156">0156</a> 
<a class='fline' name="0157">0157</a> 
<a class='fline' name="0158">0158</a>     <span class="comment">//Re-sort vector according to Et and return it.</span>
<a class='fline' name="0159">0159</a>     <a class='fid' href="/lxr/ident?_i=sort">sort</a>( <a class='fid' href="/lxr/ident?_i=clusters">clusters</a>.<a class='fid' href="/lxr/ident?_i=begin">begin</a>(), <a class='fid' href="/lxr/ident?_i=clusters">clusters</a>.<a class='fid' href="/lxr/ident?_i=end">end</a>(), <a class='fid' href="/lxr/ident?_i=CompareClusterET">CompareClusterET</a> );
<a class='fline' name="0160">0160</a> 
<a class='fline' name="0161">0161</a>   } <span class='reserved'>else</span> {
<a class='fline' name="0162">0162</a>     <a class='fid' href="/lxr/ident?_i=clusters">clusters</a> = <a class='fid' href="/lxr/ident?_i=m_map">m_map</a>.<a class='fid' href="/lxr/ident?_i=at">at</a>(<a class='fid' href="/lxr/ident?_i=GetEtaPhiKeys">GetEtaPhiKeys</a>(<a class='fid' href="/lxr/ident?_i=eta">eta</a>,<a class='fid' href="/lxr/ident?_i=phi">phi</a>).<a class='fid' href="/lxr/ident?_i=first">first</a>).<a class='fid' href="/lxr/ident?_i=at">at</a>(<a class='fid' href="/lxr/ident?_i=GetEtaPhiKeys">GetEtaPhiKeys</a>(<a class='fid' href="/lxr/ident?_i=eta">eta</a>,<a class='fid' href="/lxr/ident?_i=phi">phi</a>).<a class='fid' href="/lxr/ident?_i=second">second</a>);
<a class='fline' name="0163">0163</a>   }
<a class='fline' name="0164">0164</a> 
<a class='fline' name="0165">0165</a>   <span class='reserved'>return</span> <a class='fid' href="/lxr/ident?_i=clusters">clusters</a>;
<a class='fline' name="0166">0166</a> 
<a class='fline' name="0167">0167</a> }
<a class='fline' name="0168">0168</a> 
<a class='fline' name="0169">0169</a> <span class='reserved'>double</span> <a class='fid' href="/lxr/ident?_i=TopoClusterMap">TopoClusterMap</a>::<a class='fid' href="/lxr/ident?_i=GetLArThirdLayerRatio">GetLArThirdLayerRatio</a> (<span class='reserved'>const</span> <a class='fid' href="/lxr/ident?_i=xAOD">xAOD</a>::<a class='fid' href="/lxr/ident?_i=CaloCluster">CaloCluster</a> *<a class='fid' href="/lxr/ident?_i=clus">clus</a>)
<a class='fline' name="0170">0170</a> {
<a class='fline' name="0171">0171</a> 
<a class='fline' name="0172">0172</a>   <span class='reserved'>double</span> <a class='fid' href="/lxr/ident?_i=totalEnergy">totalEnergy</a>(0.), thirdLayerEnergy(0.);
<a class='fline' name="0173">0173</a> 
<a class='fline' name="0174">0174</a>   <span class='reserved'>if</span> (<a class='fid' href="/lxr/ident?_i=clus">clus</a>-&gt;<a class='fid' href="/lxr/ident?_i=inBarrel">inBarrel</a>()) {
<a class='fline' name="0175">0175</a>     <a class='fid' href="/lxr/ident?_i=totalEnergy">totalEnergy</a> += <a class='fid' href="/lxr/ident?_i=clus">clus</a>-&gt;<a class='fid' href="/lxr/ident?_i=eSample">eSample</a>(<a class='fid' href="/lxr/ident?_i=CaloSampling">CaloSampling</a>::<a class='fid' href="/lxr/ident?_i=PreSamplerB">PreSamplerB</a>);
<a class='fline' name="0176">0176</a>     <a class='fid' href="/lxr/ident?_i=totalEnergy">totalEnergy</a> += <a class='fid' href="/lxr/ident?_i=clus">clus</a>-&gt;<a class='fid' href="/lxr/ident?_i=eSample">eSample</a>(<a class='fid' href="/lxr/ident?_i=CaloSampling">CaloSampling</a>::<a class='fid' href="/lxr/ident?_i=EMB1">EMB1</a>);
<a class='fline' name="0177">0177</a>     <a class='fid' href="/lxr/ident?_i=totalEnergy">totalEnergy</a> += <a class='fid' href="/lxr/ident?_i=clus">clus</a>-&gt;<a class='fid' href="/lxr/ident?_i=eSample">eSample</a>(<a class='fid' href="/lxr/ident?_i=CaloSampling">CaloSampling</a>::<a class='fid' href="/lxr/ident?_i=EMB2">EMB2</a>);
<a class='fline' name="0178">0178</a>     <a class='fid' href="/lxr/ident?_i=totalEnergy">totalEnergy</a> += <a class='fid' href="/lxr/ident?_i=clus">clus</a>-&gt;<a class='fid' href="/lxr/ident?_i=eSample">eSample</a>(<a class='fid' href="/lxr/ident?_i=CaloSampling">CaloSampling</a>::<a class='fid' href="/lxr/ident?_i=EMB3">EMB3</a>);
<a class='fline' name="0179">0179</a> 
<a class='fline' name="0180">0180</a>     thirdLayerEnergy += <a class='fid' href="/lxr/ident?_i=clus">clus</a>-&gt;<a class='fid' href="/lxr/ident?_i=eSample">eSample</a>(<a class='fid' href="/lxr/ident?_i=CaloSampling">CaloSampling</a>::<a class='fid' href="/lxr/ident?_i=EMB3">EMB3</a>);
<a class='fline' name="0181">0181</a>   }
<a class='fline' name="0182">0182</a> 
<a class='fline' name="0183">0183</a>   <span class='reserved'>if</span> (<a class='fid' href="/lxr/ident?_i=clus">clus</a>-&gt;<a class='fid' href="/lxr/ident?_i=inEndcap">inEndcap</a>()) {
<a class='fline' name="0184">0184</a>     <a class='fid' href="/lxr/ident?_i=totalEnergy">totalEnergy</a> += <a class='fid' href="/lxr/ident?_i=clus">clus</a>-&gt;<a class='fid' href="/lxr/ident?_i=eSample">eSample</a>(<a class='fid' href="/lxr/ident?_i=CaloSampling">CaloSampling</a>::<a class='fid' href="/lxr/ident?_i=PreSamplerE">PreSamplerE</a>);
<a class='fline' name="0185">0185</a>     <a class='fid' href="/lxr/ident?_i=totalEnergy">totalEnergy</a> += <a class='fid' href="/lxr/ident?_i=clus">clus</a>-&gt;<a class='fid' href="/lxr/ident?_i=eSample">eSample</a>(<a class='fid' href="/lxr/ident?_i=CaloSampling">CaloSampling</a>::<a class='fid' href="/lxr/ident?_i=EME1">EME1</a>);
<a class='fline' name="0186">0186</a>     <a class='fid' href="/lxr/ident?_i=totalEnergy">totalEnergy</a> += <a class='fid' href="/lxr/ident?_i=clus">clus</a>-&gt;<a class='fid' href="/lxr/ident?_i=eSample">eSample</a>(<a class='fid' href="/lxr/ident?_i=CaloSampling">CaloSampling</a>::<a class='fid' href="/lxr/ident?_i=EME2">EME2</a>);
<a class='fline' name="0187">0187</a>     <a class='fid' href="/lxr/ident?_i=totalEnergy">totalEnergy</a> += <a class='fid' href="/lxr/ident?_i=clus">clus</a>-&gt;<a class='fid' href="/lxr/ident?_i=eSample">eSample</a>(<a class='fid' href="/lxr/ident?_i=CaloSampling">CaloSampling</a>::<a class='fid' href="/lxr/ident?_i=EME3">EME3</a>);
<a class='fline' name="0188">0188</a> 
<a class='fline' name="0189">0189</a>     thirdLayerEnergy += <a class='fid' href="/lxr/ident?_i=clus">clus</a>-&gt;<a class='fid' href="/lxr/ident?_i=eSample">eSample</a>(<a class='fid' href="/lxr/ident?_i=CaloSampling">CaloSampling</a>::<a class='fid' href="/lxr/ident?_i=EME3">EME3</a>);
<a class='fline' name="0190">0190</a> 
<a class='fline' name="0191">0191</a>   }
<a class='fline' name="0192">0192</a> 
<a class='fline' name="0193">0193</a>   <span class='reserved'>return</span> (thirdLayerEnergy / <a class='fid' href="/lxr/ident?_i=totalEnergy">totalEnergy</a>);
<a class='fline' name="0194">0194</a>   
<a class='fline' name="0195">0195</a> 
<a class='fline' name="0196">0196</a> }</pre>

<hr>
<table class="footer">
	<tr>
	<td>[&nbsp;<span class='modes-sel'>Source navigation</span>&nbsp;]</td>
	<td>[&nbsp;<a class='modes' href="/lxr/diff/athena/Reconstruction/RecoTools/CaloClusterMatching/src/TopoClusterMap.cxx">Diff markup</a>&nbsp;]</td>
	<td>[&nbsp;<a class='modes' href="/lxr/ident">Identifier search</a>&nbsp;]</td>
	<td>[&nbsp;<a class="modes" href="/lxr/search">general search</a>&nbsp;]</td>
	</tr>
</table>
<hr>
<table class="footer">
	<tr>
		<td class="leftmost">
			<p>
  This page was automatically generated by the 2.2.1
  <a href="http://lxr.sourceforge.net/">LXR engine</a>.
			</p>
                        <p>
This is the US ATLAS service for all ATLAS developers
                        </p>
                        <p>
                        <p>
  Please send your comments to
        <a href="mailto:undrus@bnl.gov, yesw@bnl.gov">ATLAS LXR support</a>
                        </p>
                        <p>
  <a href="http://acode-browser1.usatlas.bnl.gov">Link to ATLAS NIGHTLY RELEASES LXR server (index page)</a>
                        </p>
                        <p>
  <a href="http://acode-browser2.usatlas.bnl.gov">Link to ATLAS STABLE RELEASES LXR server (index page)</a>
                </td>
		<td class="rightmost">
			<a href="http://jigsaw.w3.org/css-validator/check/referer">
  <img	src="LXRimages/vcss.gif"
		alt="Valid CSS 2.1!"
		height="31"
		width="88"
  >
			</a>
			<a href="http://validator.w3.org/check?uri=referer">
  <img	src="LXRimages/valid-html401.png"
		alt="Valid HTML 4.01!"
		height="31"
		width="88">
			</a>
		</td>
	</tr>
</table>
</body>
</html>
