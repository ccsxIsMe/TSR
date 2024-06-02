// Unity built-in shader source. Copyright (c) 2016 Unity Technologies. MIT license (see license.txt)

// Simplified Additive Particle shader. Differences from regular Additive Particle one:
// - no Tint color
// - no Smooth particle support
// - no AlphaTest
// - no ColorMask

Shader "ZT/Particles/Additive" {
	Properties{
		 _Color("Color",Color) = (1,1,1,1)
		_MainTex("Particle Texture", 2D) = "white" {}
	}

		Category{
			Tags { "Queue" = "Transparent" "IgnoreProjector" = "True" "RenderType" = "Transparent" "PreviewType" = "Plane" }
			Blend SrcAlpha One
			Cull Off Lighting Off ZWrite Off Fog { Color(0,0,0,0) }

			BindChannels {
				Bind "Color", color
				Bind "Vertex", vertex
				Bind "TexCoord", texcoord
			}

			SubShader {
				Pass {
					SetTexture[_MainTex] {
						combine texture * primary
					}

		// 第二张纹理
				SetTexture[_MainTex] {
		// 用当前采用到的纹理与之前所有采样到的结果进行混合        

		//combine texture * previous double

		// , 号后面的参数，它只是取了纹理alpha通道, 前面所有的颜色alpha值失效
		constantcolor[_Color]
		combine constant * previous
		}
	}
}
	}
}
