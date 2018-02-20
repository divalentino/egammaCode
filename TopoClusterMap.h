<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01//EN">
<!--+This is an example of a "sticky" non-SSI comment -->
<html>
<head>
	<title>/head/athena/Reconstruction/RecoTools/CaloClusterMatching/src/TopoClusterMap.h</title>
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
					<td class="banner"><span class="banner"><a class='banner' href="/lxr/source/">head</a>/&#x200B;<a class='banner' href="/lxr/source/athena/">athena</a>/&#x200B;<a class='banner' href="/lxr/source/athena/Reconstruction/">Reconstruction</a>/&#x200B;<a class='banner' href="/lxr/source/athena/Reconstruction/RecoTools/">RecoTools</a>/&#x200B;<a class='banner' href="/lxr/source/athena/Reconstruction/RecoTools/CaloClusterMatching/">CaloClusterMatching</a>/&#x200B;<a class='banner' href="/lxr/source/athena/Reconstruction/RecoTools/CaloClusterMatching/src/">src</a>/&#x200B;<a class='banner' href="/lxr/source/athena/Reconstruction/RecoTools/CaloClusterMatching/src/TopoClusterMap.h">TopoClusterMap.h</a></span></td>
				</tr>
			</table>
		</td>
		<td class="rightmost">
			<form method="get" class="modes-sel" action="">
				<div class="compact">
					<button type="submit" disabled>Source navigation</button>
				</div>
			</form>
			<form method="get" class="modes" action="/lxr/diff/athena/Reconstruction/RecoTools/CaloClusterMatching/src/TopoClusterMap.h">
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
					action="/lxr/source/athena/Reconstruction/RecoTools/CaloClusterMatching/src/TopoClusterMap.h">
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
<a class='fline' name="0005">0005</a> <span class='reserved'>#ifndef</span> <a class='fid' href="/lxr/ident?_i=CALOCLUSTERMATCHING_TOPOCLUSTERMAP_H">CALOCLUSTERMATCHING_TOPOCLUSTERMAP_H</a>
<a class='fline' name="0006">0006</a> <span class='reserved'>#define</span> <a class='fid' href="/lxr/ident?_i=CALOCLUSTERMATCHING_TOPOCLUSTERMAP_H">CALOCLUSTERMATCHING_TOPOCLUSTERMAP_H</a>
<a class='fline' name="0007">0007</a> 
<a class='fline' name="0008">0008</a> <span class="comment">//xAOD includes:</span>
<a class='fline' name="0009">0009</a> <span class='reserved'>#include</span> "xAODCaloEvent/<a class='include' href="/lxr/source/athena/Event/xAOD/xAODCaloEvent/xAODCaloEvent/CaloClusterContainer.h">CaloClusterContainer.h</a>"
<a class='fline' name="0010">0010</a> 
<a class='fline' name="0011">0011</a> <span class='reserved'>class</span> <a class='fid' href="/lxr/ident?_i=TopoClusterMap">TopoClusterMap</a> {
<a class='fline' name="0012">0012</a> 
<a class='fline' name="0013">0013</a>   <span class='reserved'>typedef</span> <a class='fid' href="/lxr/ident?_i=std">std</a>::<a class='fid' href="/lxr/ident?_i=map">map</a>&lt;<span class='reserved'>int</span>, <a class='fid' href="/lxr/ident?_i=std">std</a>::<a class='fid' href="/lxr/ident?_i=map">map</a>&lt; <span class='reserved'>int</span>, <a class='fid' href="/lxr/ident?_i=std">std</a>::<a class='fid' href="/lxr/ident?_i=vector">vector</a>&lt;<span class='reserved'>const</span> <a class='fid' href="/lxr/ident?_i=xAOD">xAOD</a>::<a class='fid' href="/lxr/ident?_i=CaloCluster">CaloCluster</a>* &gt; &gt; &gt; <a class='fid' href="/lxr/ident?_i=TopoCluster2DMap">TopoCluster2DMap</a>;
<a class='fline' name="0014">0014</a> 
<a class='fline' name="0015">0015</a>  <span class='reserved'>public</span>:
<a class='fline' name="0016">0016</a> 
<a class='fline' name="0017">0017</a>   <span class="comment">//Constructor/destructor.</span>
<a class='fline' name="0018">0018</a>   <span class="comment">//  TopoClusterMap();</span>
<a class='fline' name="0019">0019</a> 
<a class='fline' name="0020">0020</a>   <a class='fid' href="/lxr/ident?_i=TopoClusterMap">TopoClusterMap</a>(<span class='reserved'>float</span> <a class='fid' href="/lxr/ident?_i=minEta">minEta</a>=-6., <span class='reserved'>float</span> <a class='fid' href="/lxr/ident?_i=minPhi">minPhi</a>=-3.2, <span class='reserved'>float</span> <a class='fid' href="/lxr/ident?_i=maxEta">maxEta</a>=6., <span class='reserved'>float</span> <a class='fid' href="/lxr/ident?_i=maxPhi">maxPhi</a>=3.2,
<a class='fline' name="0021">0021</a>          <span class='reserved'>float</span> <a class='fid' href="/lxr/ident?_i=dEta">dEta</a>=0.3,   <span class='reserved'>float</span> <a class='fid' href="/lxr/ident?_i=dPhi">dPhi</a>=0.1);
<a class='fline' name="0022">0022</a>   <a class='fid' href="/lxr/ident?_i=~TopoClusterMap">~TopoClusterMap</a>();
<a class='fline' name="0023">0023</a> 
<a class='fline' name="0024">0024</a>   <span class="comment">/** @brief interface methods */</span>
<a class='fline' name="0025">0025</a> 
<a class='fline' name="0026">0026</a>   <span class="comment">//Function to insert a topocluster, then re-sort the vector it belongs to.</span>
<a class='fline' name="0027">0027</a>   <span class='reserved'>void</span> <a class='fid' href="/lxr/ident?_i=InsertTopoCluster">InsertTopoCluster</a>(<a class='fid' href="/lxr/ident?_i=xAOD">xAOD</a>::<a class='fid' href="/lxr/ident?_i=CaloCluster">CaloCluster</a>*);
<a class='fline' name="0028">0028</a> 
<a class='fline' name="0029">0029</a>   <span class='reserved'>inline</span> <a class='fid' href="/lxr/ident?_i=TopoClusterMap">TopoClusterMap</a>&amp; <a class='fid' href="/lxr/ident?_i=DuplicateMap">DuplicateMap</a>() {
<a class='fline' name="0030">0030</a>     <span class='reserved'>return</span> (*<span class='reserved'>this</span>);
<a class='fline' name="0031">0031</a>   }
<a class='fline' name="0032">0032</a> 
<a class='fline' name="0033">0033</a>   <span class="comment">//Clear the map.</span>
<a class='fline' name="0034">0034</a>   <span class='reserved'>void</span> <a class='fid' href="/lxr/ident?_i=ClearMap">ClearMap</a>();
<a class='fline' name="0035">0035</a> 
<a class='fline' name="0036">0036</a>   <span class="comment">//Function to set TopoClusters.</span>
<a class='fline' name="0037">0037</a>   <a class='fid' href="/lxr/ident?_i=StatusCode">StatusCode</a> <a class='fid' href="/lxr/ident?_i=SetTopoClusters">SetTopoClusters</a>(<span class='reserved'>const</span> <a class='fid' href="/lxr/ident?_i=xAOD">xAOD</a>::<a class='fid' href="/lxr/ident?_i=CaloClusterContainer">CaloClusterContainer</a>*);
<a class='fline' name="0038">0038</a> 
<a class='fline' name="0039">0039</a>   <a class='fid' href="/lxr/ident?_i=TopoCluster2DMap">TopoCluster2DMap</a>&amp; <a class='fid' href="/lxr/ident?_i=RetrieveMap">RetrieveMap</a>() {<span class='reserved'>return</span> <a class='fid' href="/lxr/ident?_i=m_map">m_map</a>;}
<a class='fline' name="0040">0040</a> 
<a class='fline' name="0041">0041</a>   <span class="comment">//Routine to retrieve vector of TopoClusters for a given Pt region.</span>
<a class='fline' name="0042">0042</a>   <a class='fid' href="/lxr/ident?_i=std">std</a>::<a class='fid' href="/lxr/ident?_i=vector">vector</a>&lt;<span class='reserved'>const</span> <a class='fid' href="/lxr/ident?_i=xAOD">xAOD</a>::<a class='fid' href="/lxr/ident?_i=CaloCluster">CaloCluster</a>*&gt; <a class='fid' href="/lxr/ident?_i=RetrieveTopoClusters">RetrieveTopoClusters</a>(<span class='reserved'>double</span> <a class='fid' href="/lxr/ident?_i=eta">eta</a>, <span class='reserved'>double</span> <a class='fid' href="/lxr/ident?_i=phi">phi</a>,
<a class='fline' name="0043">0043</a>                                <span class='reserved'>double</span> <a class='fid' href="/lxr/ident?_i=Pt">Pt</a>) <span class='reserved'>const</span>;
<a class='fline' name="0044">0044</a> 
<a class='fline' name="0045">0045</a>   <span class="comment">//Routine to retrieve vector of TopoClusters for a given (eta, phi) region.</span>
<a class='fline' name="0046">0046</a>   <a class='fid' href="/lxr/ident?_i=std">std</a>::<a class='fid' href="/lxr/ident?_i=vector">vector</a>&lt;<span class='reserved'>const</span> <a class='fid' href="/lxr/ident?_i=xAOD">xAOD</a>::<a class='fid' href="/lxr/ident?_i=CaloCluster">CaloCluster</a>*&gt; <a class='fid' href="/lxr/ident?_i=RetrieveTopoClusters">RetrieveTopoClusters</a>(<span class='reserved'>double</span> <a class='fid' href="/lxr/ident?_i=eta">eta</a>, <span class='reserved'>double</span> <a class='fid' href="/lxr/ident?_i=phi">phi</a>,
<a class='fline' name="0047">0047</a>                                <span class='reserved'>double</span> <a class='fid' href="/lxr/ident?_i=dEta">dEta</a>,
<a class='fline' name="0048">0048</a>                                <span class='reserved'>double</span> <a class='fid' href="/lxr/ident?_i=dPhi">dPhi</a>) <span class='reserved'>const</span>;
<a class='fline' name="0049">0049</a> 
<a class='fline' name="0050">0050</a>   <span class="comment">//Routine to retrieve vector of TopoClusters for a given (eta, phi) region.</span>
<a class='fline' name="0051">0051</a>   <span class='reserved'>inline</span> <a class='fid' href="/lxr/ident?_i=std">std</a>::<a class='fid' href="/lxr/ident?_i=vector">vector</a>&lt;<span class='reserved'>const</span> <a class='fid' href="/lxr/ident?_i=xAOD">xAOD</a>::<a class='fid' href="/lxr/ident?_i=CaloCluster">CaloCluster</a>*&gt; <a class='fid' href="/lxr/ident?_i=RetrieveTopoClusters">RetrieveTopoClusters</a>(<span class='reserved'>int</span> <a class='fid' href="/lxr/ident?_i=eta_key">eta_key</a>, <span class='reserved'>int</span> <a class='fid' href="/lxr/ident?_i=phi_key">phi_key</a>) <span class='reserved'>const</span>
<a class='fline' name="0052">0052</a>   {
<a class='fline' name="0053">0053</a>     <span class='reserved'>return</span> <a class='fid' href="/lxr/ident?_i=m_map">m_map</a>.<a class='fid' href="/lxr/ident?_i=at">at</a>(<a class='fid' href="/lxr/ident?_i=eta_key">eta_key</a>).<a class='fid' href="/lxr/ident?_i=at">at</a>(<a class='fid' href="/lxr/ident?_i=phi_key">phi_key</a>);
<a class='fline' name="0054">0054</a>   }
<a class='fline' name="0055">0055</a> 
<a class='fline' name="0056">0056</a>   <span class="comment">//Private routine to translate an input eta, phi into integer keys for map.</span>
<a class='fline' name="0057">0057</a>   <span class='reserved'>inline</span> <a class='fid' href="/lxr/ident?_i=std">std</a>::<a class='fid' href="/lxr/ident?_i=pair">pair</a>&lt;<span class='reserved'>int</span>,<span class='reserved'>int</span>&gt; <a class='fid' href="/lxr/ident?_i=GetEtaPhiKeys">GetEtaPhiKeys</a>(<span class='reserved'>double</span> <a class='fid' href="/lxr/ident?_i=eta">eta</a>, <span class='reserved'>double</span> <a class='fid' href="/lxr/ident?_i=phi">phi</a>) <span class='reserved'>const</span> {
<a class='fline' name="0058">0058</a> 
<a class='fline' name="0059">0059</a>     <span class="comment">//Some checks on eta, phi values.</span>
<a class='fline' name="0060">0060</a>     <span class='reserved'>if</span> (<a class='fid' href="/lxr/ident?_i=eta">eta</a> &gt; <a class='fid' href="/lxr/ident?_i=m_maxEta">m_maxEta</a>) <a class='fid' href="/lxr/ident?_i=eta">eta</a> = <a class='fid' href="/lxr/ident?_i=m_maxEta">m_maxEta</a>;
<a class='fline' name="0061">0061</a>     <span class='reserved'>if</span> (<a class='fid' href="/lxr/ident?_i=eta">eta</a> &lt; <a class='fid' href="/lxr/ident?_i=m_minEta">m_minEta</a>) <a class='fid' href="/lxr/ident?_i=eta">eta</a> = <a class='fid' href="/lxr/ident?_i=m_minEta">m_minEta</a>;
<a class='fline' name="0062">0062</a>     <span class='reserved'>if</span> (<a class='fid' href="/lxr/ident?_i=phi">phi</a> &gt; <a class='fid' href="/lxr/ident?_i=m_maxPhi">m_maxPhi</a>) <a class='fid' href="/lxr/ident?_i=phi">phi</a> = <a class='fid' href="/lxr/ident?_i=m_maxPhi">m_maxPhi</a>;
<a class='fline' name="0063">0063</a>     <span class='reserved'>if</span> (<a class='fid' href="/lxr/ident?_i=phi">phi</a> &lt; <a class='fid' href="/lxr/ident?_i=m_minPhi">m_minPhi</a>) <a class='fid' href="/lxr/ident?_i=phi">phi</a> = <a class='fid' href="/lxr/ident?_i=m_minPhi">m_minPhi</a>;
<a class='fline' name="0064">0064</a> 
<a class='fline' name="0065">0065</a>     <span class="comment">//Need some warnings against max/min eta, phi here, I think.</span>
<a class='fline' name="0066">0066</a>     <span class='reserved'>int</span> <a class='fid' href="/lxr/ident?_i=eta_key">eta_key</a> = (<span class='reserved'>int</span>)((<a class='fid' href="/lxr/ident?_i=eta">eta</a>-<a class='fid' href="/lxr/ident?_i=m_minEta">m_minEta</a>)/<a class='fid' href="/lxr/ident?_i=m_dEta">m_dEta</a>);
<a class='fline' name="0067">0067</a> 
<a class='fline' name="0068">0068</a>     <span class="comment">//NOTE: May have to account for phi wraparound here.</span>
<a class='fline' name="0069">0069</a>     <span class='reserved'>int</span> <a class='fid' href="/lxr/ident?_i=phi_key">phi_key</a> = (<span class='reserved'>int</span>)((<a class='fid' href="/lxr/ident?_i=phi">phi</a>-<a class='fid' href="/lxr/ident?_i=m_minPhi">m_minPhi</a>)/<a class='fid' href="/lxr/ident?_i=m_dPhi">m_dPhi</a>);
<a class='fline' name="0070">0070</a> 
<a class='fline' name="0071">0071</a>     <span class='reserved'>return</span> <a class='fid' href="/lxr/ident?_i=std">std</a>::<a class='fid' href="/lxr/ident?_i=pair">pair</a>&lt;<span class='reserved'>int</span>,<span class='reserved'>int</span>&gt;(<a class='fid' href="/lxr/ident?_i=eta_key">eta_key</a>,<a class='fid' href="/lxr/ident?_i=phi_key">phi_key</a>);
<a class='fline' name="0072">0072</a> 
<a class='fline' name="0073">0073</a>   }
<a class='fline' name="0074">0074</a> 
<a class='fline' name="0075">0075</a>   <span class="comment">/* void DumpMapContents(); */</span>
<a class='fline' name="0076">0076</a> 
<a class='fline' name="0077">0077</a>  <span class='reserved'>private</span>:
<a class='fline' name="0078">0078</a> 
<a class='fline' name="0079">0079</a>   <a class='fid' href="/lxr/ident?_i=TopoCluster2DMap">TopoCluster2DMap</a> <a class='fid' href="/lxr/ident?_i=m_map">m_map</a>;
<a class='fline' name="0080">0080</a> 
<a class='fline' name="0081">0081</a>   <span class="comment">//Map granularity and range.</span>
<a class='fline' name="0082">0082</a>   <span class='reserved'>double</span> <a class='fid' href="/lxr/ident?_i=m_minEta">m_minEta</a>, <a class='fid' href="/lxr/ident?_i=m_minPhi">m_minPhi</a>, <a class='fid' href="/lxr/ident?_i=m_maxEta">m_maxEta</a>, <a class='fid' href="/lxr/ident?_i=m_maxPhi">m_maxPhi</a>;
<a class='fline' name="0083">0083</a>   <span class='reserved'>double</span> <a class='fid' href="/lxr/ident?_i=m_dEta">m_dEta</a>, <a class='fid' href="/lxr/ident?_i=m_dPhi">m_dPhi</a>;
<a class='fline' name="0084">0084</a> 
<a class='fline' name="0085">0085</a>   <span class="comment">//Routine to sort topocluster grid elements by Pt.</span>
<a class='fline' name="0086">0086</a>   <span class='reserved'>void</span> <a class='fid' href="/lxr/ident?_i=SortGridVectors">SortGridVectors</a>();
<a class='fline' name="0087">0087</a>   <span class='reserved'>void</span> <a class='fid' href="/lxr/ident?_i=SortGridVector">SortGridVector</a>(<span class='reserved'>int</span> <a class='fid' href="/lxr/ident?_i=eta_key">eta_key</a>, <span class='reserved'>int</span> <a class='fid' href="/lxr/ident?_i=phi_key">phi_key</a>);
<a class='fline' name="0088">0088</a> 
<a class='fline' name="0089">0089</a>   <span class="comment">//Used for removing clusters from map - reducing size, access time.</span>
<a class='fline' name="0090">0090</a>   <span class='reserved'>double</span> <a class='fid' href="/lxr/ident?_i=GetLArThirdLayerRatio">GetLArThirdLayerRatio</a> (<span class='reserved'>const</span> <a class='fid' href="/lxr/ident?_i=xAOD">xAOD</a>::<a class='fid' href="/lxr/ident?_i=CaloCluster">CaloCluster</a>*);
<a class='fline' name="0091">0091</a> 
<a class='fline' name="0092">0092</a> };
<a class='fline' name="0093">0093</a> 
<a class='fline' name="0094">0094</a> <span class='reserved'>#include</span> "xAODCore/<a class='include' href="/lxr/source/athena/Event/xAOD/xAODCore/xAODCore/CLASS_DEF.h">CLASS_DEF.h</a>"
<a class='fline' name="0095">0095</a> <a class='fid' href="/lxr/ident?_i=CLASS_DEF">CLASS_DEF</a>(<a class='fid' href="/lxr/ident?_i=TopoClusterMap">TopoClusterMap</a>,179090094,1)
<a class='fline' name="0096">0096</a> 
<a class='fline' name="0097">0097</a> <span class='reserved'>#endif</span></pre>

<hr>
<table class="footer">
	<tr>
	<td>[&nbsp;<span class='modes-sel'>Source navigation</span>&nbsp;]</td>
	<td>[&nbsp;<a class='modes' href="/lxr/diff/athena/Reconstruction/RecoTools/CaloClusterMatching/src/TopoClusterMap.h">Diff markup</a>&nbsp;]</td>
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
