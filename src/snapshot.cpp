// Copyright (c) 2014 Dyffy, Inc.
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "snapshot.h"

namespace snapshot {

static const char* btcHash160[] = {
    "5c29c74d111b80c2feabd688ee3867d1464d8699",
    "78ae4161d6a9262bd6b344c66ba9fbe1f8347f8d",
    "12ab8dc588ca9d5787dde7eb29569da63c3a238c",
    "167145e5adb9f8811ed72c2d279fc610a7975256",
    "6fc51f2a519d341392c2231faec5e91881250b5a",
    "b969f5fc32d95413b98d39a131e8ac5ebe90e105",
    "4cd470b75e7d144e179cb9d918b784462697f7d3",
    "78bd3c46891da0fb5feea1fa1040ebff1400b2de",
    "3f2152f3b917d59eb032db23b6e805df31233e6a",
    "947f8fcc1604fa18bb983672f9c897ad927405b0",
    "278b077fa7799806c8d8f4b7e8c65efa6a2ee724",
    "0088404a6726cef2350758cb98b0690d680846ca",
    "e9577a7ba673dc52fe9e17e519bbfba61c49e50b",
    "fadec86597a5615ae432ec213aea91c0e8423383",
    "105d6634cd8094d78c9f531cec585118d238477d",
    "cb9924955e295f5d3f9face8dc93c3448159cd93",
    "9257b731c4e043d9504ce5d73f4b65ca9bae1083",
    "aef7fd5ab84230836676359bbee89437e1558898",
    "b03df681452a98b04a171e54bc8ccb6c65645cd9",
    "0830ace2073b6b1bdda401c489e884616ee29e3c",
    "9fbf16bf2fe1420d5c3ea0cd3848886f6f71f9ce",
    "8f9178ff3015a0fd80952b5f36d372c76409f20d",
    "59affa80c13e19e4daaea04b6b1799af12ac8849",
    "a6537e7f526b49ecf18135e8d1e44f73aaa3ae9a",
    "9b94e439233630ddf802cd0710627cc4c2aa786c",
    "94be908821e234d5f8d4c9599eb7dc72da689202",
    "57791e9e541a0c69fcf2465d4e4cacb9a3555b5e",
    "2c425c4c02a9f5b11aae7f982a6d63b791fedd56",
    "51e55b0386ce700122f303c3805f4e1c8b231a90",
    "d1341d2c530d63486fbc1ede7ace6f8160642667",
    "199e199ba12c9d46a23bf8d6c19df8fc3d1fd2a3",
    "6265c3c5a82079b8703d6d7725c1b94426f4fb16",
    "8f408e352c1ecb1eb64ad80c3250bf52e4dc2131",
    "a94e7facb51c2a8e01ffef0078df0322b10fbc45",
    "8143c3651440b3985975c68279f3456ff6d06527",
    "da1b154a73c51f588f5f3f601f9214f34542b0c6",
    "75623d168df76c66589c79e8dde869d0830edb11",
    "7f48fcf2ff36ad2a53c404e60e0327acec03e02b",
    "7313dd7a9e5a0fcf2114fe4e66d87ba3b00ca0ef",
    "e68d6000b427d24457c5bf717fa66cae13541ba3",
    "6a3ca48c92ba50a179abd440e2f96830165f19b0",
    "a57a612024a59a6e238d12cd62552570b1ba73c4",
    "5f4b479596a86ef7b016cd3ec5531a6e162755d9",
    "d678bc12faec7379330032a439fd93c69691344c",
    "666a62c88ab3c07b55cee38119e173497a6beb44",
    "7b2e5f29786d7bdfd3e7497012d2411fa3cd6bc4",
    "ef3d2982bc6b467b62a0be49abccaf45c9d17858",
    "561be0a86c6337f6cc6ae055c757da669337b0ba",
    "90a0270d73f9b74355330166fb95728b3bd7c637",
    "793b1cc5cbcd2e6f4bc04ccd1bd6713a72a960ec",
    "f9576e9bd0f7bdbd27d4c9332e6655854cc1a9d0",
    "e892cc0f3e43e8a0f6ae4c8147fe61e078b28a4a",
    "d6936929c5769d5cf3c9709664afd2f8e61cb101",
    "1a5a448e132f24bd016862019649ebf208c549e6",
    "f7167d4db91438e0b7345a0bb503f8f61d295284",
    "181ff42b32127aab5fee343a2d4078aacf9042ed",
    "512b3485cfd269489f8bf24971a2787293d0b973",
    "ac4bfebc8063af59058eadde549750ac2b6c010b",
    "eb4c76003b5657a88c1d2158b897b720d41b95d5",
    "437abda3d0e5cbb7642018859c7f2df6f1f08454",
    "ff82b794c3fde2d6fdb91686863d2ebe3e2052d9",
    "d71829c9a8183662e6eaf598499210c770cb8fa0",
    "2976396dfd62a3a81cf86a0724a4712d802f103c",
    "af7db2a441c0b53c7d7b13efcc6b20e750306c5d",
    "afff5dd5ba3063226a2ac2be97c181208f89526d",
    "f7ff277264e18d77ad1dbe2594c734237bcefb34",
    "cee1747acffbf6c7adf523976d9d12a0a0113728",
    "8958d474d06d6b669e5dc6894ca0c0330a335f15",
    "d39c0439284f4007990d88490e51c9b120c2ede2",
    "fc964b8aa64a9ed8cb0809ef9bfbb803bb549ce5",
    "33fa87cee28767089e026ea8a5763025201c189f",
    "f2e4ba934953cd9fa5cedfc6d2466d2f0ed933a7",
    "b062b340244c4ed2822b74bd96ef5f2d513e2f3f",
    "7e2ddc9afb526a3126a319cf311141732c1d1cbb",
    "55c25ca3d6ddebef6b970e38dc52c3ec1148ed79",
    "448c3bb4227e671026514e54d808b6856605e605",
    "10bf347d2db58c2991139000f663301c761b76a1",
    "fd611a606b73eb0482f3be45b08e2722f1c7974a",
    "70c33e14cbf9e4e1ec1a961df125c7c32cf98900",
    "910e01ac4cdafb63eeedaba7ed97715b113b5269",
    "ff43b5d61a3326cf939b9f0814cea29117b33f4e",
    "43ebee29c6b15fe69a5e352abb264932b4db423a",
    "f6231d3139ab4f97fe5918665091d7cde5ed41d9",
    "04ae72674bff75e50d707537f7fff93979dd6ec9",
    "1c243deb6d9ae36f185c40a5eeeae3f9c82edd73",
    "42ae5295584adba7811bffe01f89eb19140bd7f1",
    "fc2346f100360c043041a98636d8c852e87f38f3",
    "a39e4381e45e4befdb335f081950e4a5c54ac70b",
    "82cb2edfa8cb4f9027872aeed01c68418bc91ef8",
    "962e601e83a80c34b70e7f29f444a3feec2db240",
    "c61bf5e93042ab70d512dac10846984258fda266",
    "b1030903b5684712b1736a0817364b112c945a25",
    "33fe8d3b7f0316555e4dcc916a54a2c343b1669c",
    "299ea4abc920b9e747b792d563229e764dd3e9ee",
    "5865dfc73388bd439ab0b8afedaeba7c60541bf9",
    "3591b34a0b6f0a715959e00a8595a8fb65f56bf0",
    "e1805dd8ae34dab11d2ec72378ee4fc2df064670",
    "7dc44cc296565a194f2ae07523a3f161929e734d",
    "651496ea337ce5437c899ad2d8b9907d584b8c66",
    "292b95401fd9049b622a2d38eb0ba5444ff2ace9",
    "dca94ec3bd537b85bff55b7229d21b7f52df157c",
    "a720fdcbb91a0fa32083b01388c672b0c95feb9b",
    "84d2cdc7a6c14c4d990f2e2fd715a93403f5743d",
    "3e40dca45186e12a6dde28e59beb79084a55e0d1",
    "f44ba826394c9cab5912088f7ca0231a00e7a3a1",
    "3e30403b09f7a303c0f7dede5eadeb8125253cc8",
    "02d638ce36465e8161a0c96e00b078f39026f4b4",
    "4361336d751a9cbfbf8d9dbbe6620ffa158d0c6b",
    "2fc7c6b4498878617f9b9c7bac1cd6afc9bf773d",
    "86011361ebf947667b54b73fd45990f9f96cdd9e",
    "f14d3584140bcf35948e266222d263b6dd6d8755",
    "27861f9b18eb46d789ee1a45f1464c87af7a0a41",
    "effefa477bbb3cec73dffd9915d6e9f887ddd9ec",
    "4fb3c44a9eac8c00b8d759177f332587c26ec1e1",
    "e628b3abff610619c012f2f07dfbc806b0072ca6",
    "e4997039ff861c0e511ae6044a8e90eb87f000ef",
    "5a9467c0ae6e6ebce8c7a7e034e5b94b84f84331",
    "a40432ae12f56470f539d38ee655560d4ed3550b",
    "4560a23e4734f5b16e0c6f63696367043666d84a",
    "ad1eb9ef279740786fc4a8a7a5a343f596162235",
    "0321a32810633d05732fb64786798ec7e7a8385c",
    "016687a79475ebb77ecaf6b55160104615a2314f",
    "3a8f2d83018458b7c338121f33263ae6cc2c13a9",
    "279ce682af6074947d416447d7e4988157482c9c",
    "6311c75e98bcd04a10da2f35d139275d203bed07",
    "7189b1df153da3cbd5ba5c64415d93c994f5a596",
    "4701eb7642ddaadee64c838300a8386d01aadaed",
    "e2085acd390e794530cb8c4d4f4f5b11b8cb0b29",
    "1c18e86ad090f047db7785cd8e724e95c61702d8",
    "d4a9efd7be6464b58999a491aa6cf754b3a0ab85",
    "3f5f2851821153f29069eab5680409ca6f6e84c6",
    "4c9220ecb348438915f311d255f738e9b13fba19",
    "0ad7abfab3d99bf570c9445f60e6e85409e80721",
    "aecdc373b2716beeeca6e3b3bc54ff1b7b5ba422",
    "5e89a43d0d38fe6b35c0520159607ebcb16cca74",
    "d586d313c2140180430c6f203cee55bfe34a53c2",
    "5e0af7278632cf246a3dcaaba4cb655124eb16ea",
    "88817553f53eed1cf41068da9713a9811d9095a2",
    "fad2e2171bde79310c6d09e4898c73b309b37221",
    "bca09f1a56fe223ddc6eba9d10199f90fcb36017",
    "2879ef451f83bc6b0ce11f79bf64bfa7200bfd6f",
    "40be78285eb556e738c0f03098ce52c434c861cf",
    "978c5e4765cb2fdebb569a93e18d2b590d50405e",
    "3411dc85a76f27fa8b127b596f14c9fe1a44413d",
    "70f0c67cc96288c70dbbf7002204fb611be637c9",
    "4726b6d8b8d4f9dff1ce92e7c04b5aa6e8eca2a0",
    "6319320ff893ad7e16f1e60f8daa4e982d076835",
    "70b137a052f925bfc89e298b6c0d37bf2a4afe08",
    "971dbfb8e2c92b2fd8225df66d81369404774160",
    "dc65600f7eba6b17b883f35e417cae3aec2dea6f",
    "e936f75c124969782c3c6c4b4bfecb5b5f1cdd3f",
    "8840c42233cd7b7d15858e2e1f20e2a2a40b5a81",
    "d393d004ba3b9a96a9b76829aa41e93edf9cffe0",
    "b62acdae591823dc98e07e99a835951b92360280",
    "b98eda8a39dec6240686edbd431654ca04b8751e",
    "767b717762b89781a628e40f6bdebbada6c5f01c",
    "70b484819f47538be319991fb4d3a14e8803d35a",
    "3f856aa5513192f5eb05126ff08fad78453c1bde",
    "f81fc5bb46027187236af8dc52fba92dd6db4bbe",
    "3435a9f2717307c12112ac32e2b0d7d515942834",
    "a4fc973472e1a40e87108307f65dbfae35f815cb",
    "b28fab4ea72a0be711dd529d0afa0503acfd46e1",
    "b4a2efb2998648314971da63809650a5b8a1ea4f",
    "62e907b15cbf27d5425399ebf6f0fb50ebb88f18",
    "5e5c28724e04105e34f4f594aee529705089d55e",
    "4db2d22093608e4e51557f43991679efbc857c13",
    "581f80f0c9b6a42f584436b3263543c719eac031",
    "53010a8ef1ad523f82d92e70c6166511f6f2f8f4",
    "fece25258bce3c91328ba22408876d075b198431",
    "0a0b536bd8c11c823cee941c9e70ea8b9a3f5850",
    "df01ae6747d4741bd4dc05eabf0c739558bf3ff6",
    "4fb2c7a47e94fb1318332a2e17bb47de04e50302",
    "3d84af09bd04c11f7e99781ff11b617a7ca97d80",
    "0b169d0f9d249e3d6e1a27f76c713afe54868725",
    "282b831781b1e795ca8b7dfb609ab4cae03d5ab7",
    "f2ca01f7deb907a7860b7f0539b6fb8a3988fd78",
    "9d9354f5e07b9f9a9acd99b6c731db0e9e94b8d3",
    "819c36c5ef2e0d90a3ed8e5fd7ea2acc3ec0daf7",
    "0f4f5a93c15494109ae7acadc4a4c1fefe40bb59",
    "3bafda9f5ab71dbd1291c37f4e45e1d1e0fc9239",
    "bd3ce1bd93125b79a4f8bd03327ebf6874f6b387",
    "8213ba9081d6649f78e0bfc797bc628c4bdf9ac5",
    "15ea8ec455b52cc8cb2d276b819766ddf4e9fdba",
    "673c9b7d4af23f13660316f0e7253d400525ab10",
    "94a8a481f5c569207985fd6da1e98483c86129d0",
    "905e45fb5d36e89ff5711012aade7d6e0c365c9b",
    "347f5538a9a9bb26ce4bfa652d712673fb74bd51",
    "ec3988dc6714cb1ef422d465a5d6bcfd20707f76",
    "13bfa92d882bf70c33744f76f32671627ce5ba9b",
    "7ce3c32cb95cf911894517169620f0257275284a",
    "49144049c303e5f381395874f79180f967cfdf90",
    "132130f19e5ec62bd79b99e3a64c604e43549a14",
    "f6204c9497c0bc5245b5ee7aff174e7a87fe564c",
    "5c792b427865f285670a4a2de3ac95ad1b7092b9",
    "710344ffe133ecdc2cdcd2f2e543a027283bc8f3",
    "3857ac86cdc70fb932b675d45535d55229d84b83",
    "b311e043071d6e91611230f945d124835e22113c",
    "8f1aba222e0b66c4a563bfac0ae9036b6ef2fd12",
    "5a050923d7de0b1533b9bfe12e7d9ea57091fb67",
    "295d636e7f8b0b97f73568a194c3200da1a9771c",
    "605d985e64c18ccbd74c49c00d45c130872b6fe2",
    "b18f12a77de0369b8ec89dffa87138ca9f9310b2",
    "efd700544ab8cd5e203ad02a8c050012b55e7580",
    "1be35a233df753dfe8d2ed556ea300fc14b15fec",
    "1a8170f7246aa1a29039f5907cd6a777363404bc",
    "83ad98e0c2f538f767ed56606ddd358977f9ab00",
    "f9d38076ece422ff9d190c1d7413375c29798bb3",
    "92c2ab6425c5dc81a61c4fdecf39e4de95466e1c",
    "bac9462b3b7619b98e1db9443bfd44052d991f09",
    "fdf34f1b075fee6693f3ff01b71ccd19cc741e06",
    "7534f1e918d9acb7f0dec1b99a2942349de29626",
    "874e7f0105e29827ade637e1e8976707064d5f7e",
    "351540bd57ce9769bc2621acd56482bbe8d18d38",
    "3c28384af88195c479f81710371e52ea0e0fb42a",
    "83085b6febde9640904f7d884a3a061ff728e2dc",
    "698d822e9a19cc368b9f92b3ac38f9ee048e030a",
    "12b840def4050c0c47294a6b1fb9c172e1f63fe6",
    "fc944576e16a4cc04187960de46714db4ae28bb9",
    "e5e6f41b4b53e959c39bab657274cc7cf5cc7421",
    "8f05a124d02709c2fb4ba0bc09060981c8ddc121",
    "39f3e128670c44702e38ff6e6c9c1cd6c850bef2",
    "69a0551054f570424523abde62c796eb24a83e8a",
    "49f489e31b96e8b53a2fd0765fc4d271ebfafe4e",
    "813bc42901d819fe9542eb8dfdcc1d0c13210da1",
    "cb51ef3f36e369465cb6362776f8241feedb95f5",
    "1f47de2722df3c40bbe0ca61e8f5acd1fe46b135",
    "bc5ebb81500f414b1d8fbd4a1cd3c68d01d0cc5d",
    "5348923e7e178b42b326d020e3a6b5d08432d837",
    "38a78eab5432e5f5a22366ccb849e9bbde26acc9",
    "3248d46c9a01f58d3dde418a29809bd5f10aee9c",
    "fa0643165bd2806ef9e3f2242ce055c9cbbb954f",
    "72f19da94b9a107447dae7e479f7489e2950cd7d",
    "af3964e461f41b87ed33bac7d5361256f95b4f04",
    "a557b6a9eadeb12c38d1a25c9d01b0014e1cf46b",
    "448aac6f20ded3afbe873dea9c804cd9677333a9",
    "d5d37019c13bba4ce2ced232c4f6f9a98c740b52",
    "ee3f8210fa0bf3c14352a335bbf75c2078d02f80",
    "4eaae6f5c2abdebff37ca0805db42baa3e4a4bca",
    "c394d392ed52f27180c7f3f829dbe0761008fdd4",
    "a778d4f26607e7881db002f17475cc7f727240fa",
    "dbb80985a6ec2328ee3b96c03b0f52afff047e4b",
    "625b07c6492f367f15a34c8ecb4a52e6b4c8298c",
    "55f580bb623b4563fbecb5c5ca3e8aeeb90dfbc9",
    "e2cad0e7cf0829fccac2a6fdf88e5661e92948fa",
    "a933f7100027917dbd4f90e49f369f03fb03a0ab",
    "d0d2709f7944eabfa3bdc4dd512e5f16f1e35df5",
    "d6938aa5560812d7b1a1111f383109acb51c0c13",
    "ffc138f2b79b561a61cdebf7ab47715071b519e1",
    "2afed28afd73ff9c4632a15e73681db6b55b670b",
    "53ffa84e98f374498113571de414772cf43e67a8",
    "706077b17dde2279500cac93bcc02dff9a70e986",
    "cb31ba6ddc1f9252b4fda50c9d5f1502fff28eef",
    "dcd5a131fdcfbd13a459c0065ad8d941952a173b",
    "aab53eb029c63e30aa27409496047fe62b14973d",
    "b7df32db43a53a26a416367cf65bec985cc6eae7",
    "543e1271aec6fa48ceca34cd19ff4fc4e3ce2fea",
    "50838cab7b905bda3c7178a218549b49e4c4ce38",
    "3338497b06ddb0543da323359bfa0f4cd19d43ea",
    "c9acea772e4e7415889586550557306b47f62b82",
    "3ef1efe09cc766d9f0c758ff15cd6684a24f0e6c",
    "25711dbaef7442cc1089ea6e1fcd40769e3bfb3f",
    "529344efbf828ad3ebd6ecbfc57092cdce423176",
    "0ddf7852951227a6c642cb688a705c8659661181",
    "ddf59179943a494f5fcf066810fe9d6dbdeba9e4",
    "bd0a204b4315151d7ee48308f9fc6e7b59c39799",
    "394b84a95094de345aef7a2212e9728eb76d8d75",
    "e3d1e5b0a231168b91bf13cffe215d564f34d9fd",
    "cd8cbcf6b006eaff8f278f10f3243931214c151d",
    "8f8e21685c80db80d6f1c4e7af944a08341281d9",
    "90453b8a99c7994ccebe8cd06a2fd94017c2dc84",
    "afe6c4ef87dbe64bd024629e11609d2729c9b2cc",
    "ddb1c20637daf1ecb086d7cac6ae258960a274c8",
    "5fbb568e4b0830e5f93e5ca1c50c797b3aa476e0",
    "ee9513f9624b91b472524ff2c1907f5ab4a9a93b",
    "f59cf4cb83ea0d2ba2fb693e6946add730106541",
    "a79e05160d1fe42f960283bba45cd161df5ff615",
    "dc8857d4d6182647b3b49d2b9d3bfa9b3d204e31",
    "ec9b7af0d53210ffe88b3a43ce353348e3450e5c",
    "388236d18635e50a24e8bd9bf9fb973385f21aa8",
    "c83a7904ab618cc0e14d9ca25c1b7885a07fdd18",
    "4a1c103f31783bcc7298a88f1c0d4e9bec86a064",
    "1d8c2455c88835c6fbc8011b8589f2959ad93ad2",
    "d533d6b9c76207344f5f1c0a0eb16393bbf27f97",
    "c29ad5a23691c83ea862b2efdeb742c0751ffdd7",
    "bdaff5ac5ebe405333aa0047c16f0786fd46198b",
    "ad63a66eeecd000c6a1ae8996c84b1b043f0d2b3",
    "55383df1212a6fb9a6f48b690e50413e4128bc3d",
    "929c2b429b2e4feec39e423d3a9edc767d9842a8",
    "7cf91d4c97de92cf14b678dded2dd98a4fd3a950",
    "c107ceaa634f135307b39a37eae04ce489952b5a",
    "499f4e5791d91829030a18f272964960d7c79c1c",
    "d018ce2638e09513a93535806d800a4281c24a6b",
    "544bc90231858180817bd36b471394079dc30012",
    "31795bf14c7230a70816581cf9232b07a5a2525d",
    "782f203f7572d44a2d084fefb7d948efe9760de4",
    "51215aa59f1f0fecd902aca43b05a4d3c8f908e9",
    "046becd432a64f4b454d2ded344000277b4ef600",
    "6762224b567072eee8627a91fe86946cb8e59e7b",
    "7b6be6c6e06a8a41d58330a74ebeb929decbd101",
    "d1ddeb30b0630b4c1aaf1b8a167c8812d6946d18",
    "0e64e35f448c1166b8cf71f30552bdd6cadd1a1d",
    "006804d10b385968cd6a28cd05f50c887dee327e",
    "9799400d01ca7ddee74b404ffaa6f683f068c7bb",
    "8eb87ea7f98c2220233294f1b4fbcd5172a332f4",
    "c26152bca5fb15fe7013e34653dd14861feb3c39",
    "69349ce98b5a0d5bae05909623c562b8de8fa2c5",
    "f64b7e5230ea7e07c1d1d31e4322b68528131926",
    "90703e5bd02fc6a4eaae3f2ed2dd4ed377a72365",
    "2663cacb688536c87f37511855487b11a0ba9219",
    "587beeb08c50f02e29b6391701ac55eede472445",
    "dd2013132f582dc865f20bf58f8b545f9de37ba1",
    "b239a2fae3630ee6cde14e474402496b256fda61",
    "90eb545247236b9c4e54a3121b3db596d709cf8f",
    "dc16daa7cfd166a42be0f004e95be358d879f49f",
    "9236167b1022a8419c317df570f1a10bb9bed1c4",
    "a7c776497a66006740e1e0cb1e2d2555ff35734f",
    "3cec12c27353afabb9bda41ebf1b3618fc76738a",
    "4b7dc00623bc26dc188651989f0fe425fbf6b268",
    "ffa603094c6fd1009ee11257dc089634eedaf0bf",
    "f31e134e90c4cc0c665a8f7ca8b63b53ccc82dda",
    "c87071d115f3836d3b28f5e0d3947dd3564fa689",
    "3348ba51502157496aac328a8d0ac657f20454ae",
    "8c54279c4fa7fa252c59bcec8c56259949cab809",
    "bc771975a381f0e39091063fb55312090d14e697",
    "31482d4d23fe3bf71f2321a9b8ef8613c670d2b4",
    "11411ea9d9fd6db8b72eadce733343371a362a1c",
    "49d51a4786e73d85fda3a1769adf46ff1b237558",
    "441037499986659f1c0683f3769ea98efdc6ae4b",
    "44a8aa7181e241ea2d443776e19a40ecba966ec5",
    "9af3a30663e956f9f26cc9b37292c67c0f348613",
    "7ff7a2e75924a8030ff35abbe14be0ff3e469fa9",
    "f92b21fc2088ffacd64789a1504da6937daa2817",
    "7c50704815efba609c30475b0d104e50ad663ca8",
    "16faa47a85ceb08ece6cbcedb623a920dde53661",
    "105353b0222b15b88922bdcaa99e2ab0f75ae817",
    "b1ff6f7816bf22c7c1c118b50473eec7ef4a5a79",
    "bb87afb755439cea4c05de5ddd21b9105e7b9d12",
    "f8077129e1d229f331db423c599be84488107faf",
    "adc9eb112f1761419a99769c0ddea5030f236d86",
    "dea5ed7ba36448045548eb365cce4706b26029b8",
    "f39d848020ffce6493324aefe5fa14a6b7c23a83",
    "61bb97350a055fcfbbbc9194fc571ef2749b82a2",
    "e04e5ecb761e07aad2139c39006835851ae3483c",
    "83a088d0847ef8a47673d5d443656a5c2c04823f",
    "62bf651e03fe4818274bcb3e36419af89aa4e873",
    "cd426256e3c844af4fef7c5251c9890ddb852f45",
    "68cf7b1b2ce61317602adf187383244ef4c7468e",
    "bb45398ffcca060b3f483d1c4de7a252ffd7b291",
    "f529e7fcf018bf95d752a24f48f56e0e077f5245",
    "9cde7721ff48c7d56efbaba9f77ed735b20a2642",
    "961b5640ac26bb22e2d40559e700d73083b1ad82",
    "823916a5fd9d699cdbdbfcd19054a2d28f66de79",
    "88bcd6408affdd19a5b28dcbd87039a0166a2270",
    "7d85b60650010119bb7b7e7c9e654c375f4f3b51",
    "a428c1dbc8bc2bfae74c85d1d431137fd6ff2419",
    "101da575f24a8dbef8540c15ad9f4a7a004734fb",
    "869901da4fd89e429f02b1fb6218ea1b839e42b2",
    "b2b7766df442042e3c204ded7ac0f7d454e8ddd0",
    "760f3992b518bfb7f0e58405a13e69a1aeca5fa8",
    "9e4340f9403be5f7a9959ca853e4f8c031c17b64",
    "13b310ed826e0ca363a002bf3ae9e234e75ccaa7",
    "53407fe03badb5ae982ef69058ce0f5a1ec2babd",
    "3b356065b440a1658396aa0bec55ce3c633e79b6",
    "1790f01d4090b96b67efaba544bb395d5e905a61",
    "19cf99d0963cd7f208f07c2219379316d683a855",
    "2c54f101313cb041248e64163564655e05a779c9",
    "dea582dd53ee0321eaa7485502f24461cd04af4e",
    "d18be493ebb4d47acac561fffa3b455c5fc587f0",
    "3a48b30932c58e7f96dadc0fd0d0bd0ced48ce6b",
    "3f4d81171a8043fca0f6a7f3f718763884d161ac",
    "d37385aa6cc7c05f6ba08e8d0568b0f6d0565a0c",
    "9931d6af1047e47defb0361fce375b27a0175d92",
    "fb69fd82dc51ff9be64659b4da113b7c71e1182c",
    "2f0bc63a4d98e3dd1a4b4da1988018267effe039",
    "4de5efc26cc9d94849819ad04dbea2dc5ee44eeb",
    "9fc623398d210c75a8dfea077401a3b75778e48f",
    "9c07b5e3b9799cb435aa8500e4ccb4048a2a3577",
    "6b85109a040946adc4f3d63b174f0dc694c65dad",
    "28f8d60098e9a57b518732b40075d5d8b7eaabd8",
    "23d80e0180f5cd409e54f81d2c0c7fc6e9d1e4a2",
    "43e4aabe1619ce27e19854561470d5cb8be59112",
    "b813f125f69e6d0a844fa0d51937e134d5a26f96",
    "1ca5fec0b59adff03589a06e195761e4e99502b0",
    "b380f25300cf2f3af093e1f2b29bf8bcc6a96856",
    "c3cc881c45fde8e974c89321af653e19a66a3481",
    "fbf99eccc45e97b87b177086647d4fbd5b269290",
    "8dc3cb4bb52f2764517fc15c5acfd1cb79e13713",
    "1e5d2c2e42bec952ef126b822bf97a8b4baf7670",
    "3d79bd4ae1f562f8d2827ee689b91252f077e3f9",
    "b016644c6f1c8146192115ec22b4f005bcd66418",
    "7bd1b42e7f5e813729ab4948a47340e9ec469660",
    "f02856b63fc2ebd4e947cd5e1bdfc029ea1ca219",
    "de0ef2414b984bdcf56954e7f2aab7372cddc375",
    "4aedf835e84bf94dcad91546c90ce20589436987",
    "7cd31455a61303e4e81ef3dc9b2ce1f54c9fc7fd",
    "65cfb4fd9fa38ee36c6277d87dd6f96f4f4d2e0a",
    "aa584d336a7d94d2dc3ebbbe8b630aeb27bf9215",
    "325ed0d3bde458e97230b4f2e9479a4d2953f210",
    "9941f38adb27557e055486c2573c17c01ce9a50e",
    "ec8da1f5802ffad26b057ef1a8248f90d047b36a",
    "d943c3c62ef7003fc8d99c2fae0ac768cd4311eb",
    "9faa49a4fba6d123221a32b58744f88bc9544de7",
    "85d3c546110bcab2db64765f9aa2ebbe35c2251d",
    "dd314d7c7e0d0e3b9d3607583599a0fb0f536a8e",
    "d5fe2fc12d6bd824d1a37c5d53aff9e5a04d7a74",
    "20b6532827bc5b1da59a71cdb14eaecdfa704bbc",
    "24f327dffdffbb300cdfe6a6e0aa6bbac8994fd6",
    "48ce4c24ad5c5477178e6f5cdb7c27e2e2c9ccc5",
    "b25a6cc258957924ddf6a5ec7801fa0816df03aa",
    "b22ccb4178557d4c5587a525213172add70cad82",
    "7d6cd7edf7c936bd29af9c5ae2f94b90d17c03a5",
    "78b48b0582924350815f6a4c3a7f3a25a1de6085",
    "c53d58352e43eebe5b1be42354be1ca07e1c69ed",
    "739ebd496c9824106f5461fa30c91eaf09b4602c",
    "93267460fe2fcda1e8ff355792b1ebc86bd321e0",
    "8a92ade1303863ba9c891bbb9c742591284139fc",
    "2d3e6f7a4ad2c01064ccf5f2d96c6817ea4a4bbe",
    "22d7ddf9435e0490a5f0988fe5618c4ded11895f",
    "543a37198e9a914409922cfe8d95e5335ce59ea7",
    "87c6b6ffe99fac30691fd9fd51a9660777910999",
    "8a0e626dd621b1047fde14f3b56110423c7b5e64",
    "5eda321bb0a4c790a066dca7da46311c09e76f61",
    "b10d479560ea2af2c619b6d4e53e365c75d4ff81",
    "b9364d11385859ed40f2f0cdacbd8d577c72cc81",
    "bcea4c97cd12604bf64e00708a1d9b955ce0d700",
    "6c959afa1c4bbec577c1dc50f085b883d3fc08f6",
    "dc6959fe84eafc0f5559bb46bebe43730e893840",
    "73fb1f19e6d5307961ddb1031612211722814076",
    "73aff5081342571eb0b3c1af23f2e92486a057f7",
    "9baee7d9e6fc73e5628b94c2313f6163a485d7f0",
    "5c3d02f2483dc0f66387e363848277605a6ef1b6",
    "7895dd074279171d3aaffda97e3f46159be4fd36",
    "e9dd067edda781cbceb9181673d145bed40b75e3",
    "2bcff53531014feb82f299a6f3e0c2d1be38832f",
    "86ff0809f7aa2e2f56ec4af448d510cd05d04885",
    "e5dd2977c611e95b005807acbebfdfb26cb97fbb",
    "c9d20ea1c88c57599fbd2dc0e7fb4a4a2b6e4b16",
    "164279ac78d463d7b1e2f35870f3ec79acead72a",
    "85217c586e2005629d09af6e177ea28b310a0e4b",
    "abeddf6b115157b704de34c50d22beefbeb59c98",
    "5198dbff389f4ff713816b96657a66029aa673d1",
    "510af79963f73868422e9dc4fc62a9d83af9eeb1",
    "9db2aa4279e5b600448942606bbae2a34d8fb902",
    "9424d3ac54f12e252e91e99853e4e3e6e597867c",
    "8e4e578c335d9e48a23f2720ed2948d63b93d4aa",
    "071454c6486782b3f8d3a1366e9bc7ab3366707e",
    "45dddff3bf10ff4f41907418c975829f235efe8b",
    "dad84560c59d0cfe43572a7dbf57bfea7a004280",
    "945eb8fd35731765af1391137c71a8d35cd66e22",
    "32d53351b20b67f3588b512132374cd755b79e11",
    "99a770d12b31bfee08764dc0d183345dfd3e5cd1",
    "a00cefaf56b94e8dae97572ca7bdc64d8eeff0ad",
    "bc25b96a754ddd74e7ea455236dfd4cb39f18b70",
    "b024787c6c9029bb6a5d100c9f90b5185ab94c09",
    "35412eb48bde1639a79417b32c5b23b09f5e97ed",
    "88112b4982081c8435efebf680e11820a2e1873b",
    "68f9d6256b720b9b235532e216454b0cdd072ce2",
    "51360b4cdd68508729ff1fd9ebd59387171c2fc5",
    "bdbcf6f38d616d596f52e7fb651f60742f53ff21",
    "60bb8dbe4cfa8ffd60593258eeec5601a5555b6a",
    "5bf6381c81fa9f4cb5d0468ea2fb3c306722d305",
    "ae495a030d645c7426a29b95cebe268631bdb793",
    "19ea8e5e7f80758af1421667177649620f7530af",
    "afa66b8aad2296978de522104385f586983e105d",
    "fe9209b097575e9716ae30cd37796933ed4ee663",
    "02ab8b78402e0449f9c6515d801b60f0b56ab609",
    "c629328dd9043a58a8fcf08337a9898c915d6424",
    "f72f7141a7d09eab840cd5687ade30e9356e350d",
    "7f2200c957fcecc3d4b1a6d057b76f591733f67a",
    "97bcf1398b58c666e19c65a746e737a14a0a1f57",
    "ed728b2ee3c106a0b1e4a036b1707d960374ec86",
    "053d981d93e803ffc0bdc77d54a9ac4906163dc7",
    "425777c18ff4b37c249c34bbd3beab8c98eaf687",
    "807afffc08a1afcf01ae0937beb29728f087556b",
    "77297320c6b6016033fef2907baec86c4ec52330",
    "a459cb9e47abaa4f054d6c411c4831de534dcfb5",
    "01e878e00075364cf5570b229765ba9502b880bd",
    "79baedd64fa3c5e941ff682c500a5f12aa0b1297",
    "2a9369821eda652fb9def80cd0737d83483ad567",
    "ee990b5d0b3e09dd2d09ea53f711120aea81a24d",
    "4573538021b739edf6a4d643fb2de9a2a37c85c6",
    "c0d73bb816752f604b9f8764b817069f2f806078",
    "607fe4f4c55ff760234b25bd89fee5418220571b",
    "a25a2a29d269698728a40b6648881eb4ada9f689",
    "ea41e1023af18b8d66fbfdc1618130b95e97c585",
    "332076a5b2f1545b8831f6b90c6d1d36e72633e9",
    "db9744d5172d81127b6a92c5eecbf25a9110775b",
    "83c65b6efacc4112a29e276e8a3e94e158e76f85",
    "0f90294b212742574f9e27c2b39b0ab5f9daad7a",
    "49e653e69b041a643160c959a73262a2eaaec140",
    "e15a7b7f3cb361cc5a6ce644d1cc8d0ca3d08c7d",
    "1cfddd050cc80aef7e78b084c49e9c733caac6d2",
    "2870c2f39cb4c639e4ac910991486c04f3d2b2e9",
    "848c56c563135450e157f1659211af1e4238d8e3",
    "f0f432087fd7c4c05b5ce604494cd34212d1f581",
    "fbe01dcfea03678da79c015cac4518a9a199d2f8",
    "cf66cbe353337815f670375018a072dd188ba90e",
    "73fb24e1e625669f109d82aa92813d303a17e724",
    "3c375c8e4b15967946ea55a808bd8cd7368fa98e",
    "245ce44f8fe32679198ff17f0385fb09668a3249"
};

static const char* btcBalance[] = {
    "250.00000000",
    "150.00000000",
    "100.00000000",
    "100.00000000",
    "61.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000",
    "50.00000000"
};

/**
 * Build the genesis block's coinbase transaction.
 */
CTransaction CoinbaseTx(unsigned nBits)
{
    const char* pszTimestamp = "Boeing wins role in next U.S. space chapter";
    CTransaction coinbaseTx;
    coinbaseTx.vin.resize(1);
    coinbaseTx.vin[0].scriptSig = CScript() << CBigNum(nBits) // genesis.nBits
                                            << CBigNum(4)     // 0x1d, 0x00, 0xff, 0xff (mainnet)
                                            << vector<unsigned char>(
                                                   (const unsigned char*)pszTimestamp,
                                                   (const unsigned char*)pszTimestamp + strlen(pszTimestamp)
                                               );
    coinbaseTx.vout.resize(1);
    coinbaseTx.vout[0].nValue = 50 * COIN;
    coinbaseTx.vout[0].scriptPubKey = CScript() << OP_DUP
                                                << OP_HASH160
                                                << ParseHex("6fc51f2a519d341392c2231faec5e91881250b5a")
                                                << OP_EQUALVERIFY
                                                << OP_CHECKSIG;
    return coinbaseTx;
}

/**
 * Read in Bitcoin balances and accounts (as hash-160 strings) from a snapshot
 * file.  A transaction output is created for each (account, balance) pair: the
 * output's value (nValue) is equal to the balance, and its P2PKH validation
 * script (scriptPubKey) is set up using the account string.
 */
void LoadGenesisBlock(CBlock& block)
{
    CTransaction thisTx;
    for (int i = 0; i < ARRAYLEN(btcHash160); ++i) {
        thisTx = GenesisTx(block, btcHash160[i], btcBalance[i]);
        block.vtx.push_back(thisTx);
    }
    // std::ifstream snapshot;
    // boost::filesystem::path curpath(boost::filesystem::current_path());
    // std::string SNAPSHOT_FILE = curpath.string() + "/balances/balances.txt";
    // snapshot.open(SNAPSHOT_FILE.c_str());
    // if (snapshot.good()) {
    //     while (!snapshot.eof()) {
    //         char buffer[1024];
    //         const char* btcBalance = 0;
    //         const char* btcHash160 = 0;
    //         snapshot.getline(buffer, 1024);
    //         btcBalance = strtok(buffer, " ");
    //         if (btcBalance) {
    //             btcHash160 = strtok(0, " ");
    //             if (btcHash160) {
    //                 block.vtx.push_back(GenesisTx(btcHash160, btcBalance));
    //             }
    //         }
    //     }
    // }
}

/**
 * Construct "snapshot" transactions and load into the genesis block.
 */
CTransaction GenesisTx(CBlock& block,
                       const char* btcHash160,
                       const char* btcBalance)
{
    CTransaction tx;
    tx.vin.resize(1);
    // tx.vin[0] = block.vtx[0].vin[0];
    tx.vout.resize(1);
    tx.vout[0].nValue = atoi64(btcBalance) * COIN;
    tx.vout[0].scriptPubKey = CScript() << OP_DUP
                                        << OP_HASH160
                                        << ParseHex(btcHash160)
                                        << OP_EQUALVERIFY
                                        << OP_CHECKSIG;
    // printf("%s\t%s\t%s\n", btcHash160, btcBalance, tx.GetHash().ToString().c_str());
    return tx;
}

/**
 * Mine the genesis block.
 */
void HashGenesisBlock(CBlock& block)
{
    block.nNonce = 0;
    uint256 hashTarget = CBigNum().SetCompact(block.nBits).getuint256();
    uint256 testHash = block.GetHash();
    uint256 smallHash = testHash;
    printf("Difficulty: %f\n", Difficulty(block.nBits));
    printf("Target:               %s\n", hashTarget.ToString().c_str());
    while (testHash > hashTarget) {
        ++block.nNonce;
        if (block.nNonce == 0) {
            ++block.nTime;
        }
        if ((block.nNonce & 0xFFF) == 0) {
            printf("Nonce: %08x\tHash: %s\r", block.nNonce,
                                              testHash.ToString().c_str());
        }
        testHash = block.GetHash();
        if (testHash < smallHash) {
            smallHash = testHash;
            printf("Nonce: %08x\tHash: %s\n", block.nNonce,
                                              smallHash.ToString().c_str());
        }
    }
    puts("Genesis block found.");
    printf("- nTime: %u\n", block.nTime);
    printf("- nNonce: %u\n", block.nNonce);
    printf("- Hash: %s\n", block.GetHash().ToString().c_str());
    printf("- hashMerkleRoot: %s\n", block.hashMerkleRoot.ToString().c_str());
    printf("- nBits: %08x\n", block.nBits);
}

/**
 * Claim unspent outputs from the genesis block.
 */
CTransaction ClaimTx(const char* btcSig, const char* btcPubKey, const char* txHash)
{
    CTransaction tx;
    unsigned nOut = 1;
    unsigned nSequence = 1;
    COutPoint prevOut(uint256(txHash), nOut);
    CScript scriptSig = CScript() << ParseHex(btcSig)
                                  << ParseHex(btcPubKey);
    CTxIn txInput(prevOut, scriptSig, nSequence);
    return tx;
}

/**
 * Difficulty calculation and fast log estimate taken from:
 * https://en.bitcoin.it/wiki/Difficulty
 */
inline float FastLog(float val)
{
   int* const exp_ptr = reinterpret_cast<int*>(&val);
   int x = *exp_ptr;
   const int log_2 = ((x >> 23) & 255) - 128;
   x &= ~(255 << 23);
   x += 127 << 23;
   *exp_ptr = x;
   val = ((-1.0f/3) * val + 2) * val - 2.0f/3;
   return ((val + log_2) * 0.69314718f);
}

float Difficulty(unsigned bits)
{
    static double max_body = FastLog(0x00ffff);
    static double scaland = FastLog(256);
    return exp(max_body - FastLog(bits & 0x00ffffff) + scaland * (0x1d - ((bits & 0xff000000) >> 24)));
}

} // snapshot
