#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "UnityEngine/Rendering/BatchCullingContext.hpp"
#include "UnityEngine/Rendering/BatchCullingFlags.hpp"
#include "UnityEngine/Rendering/BatchCullingOutput.hpp"
#include "UnityEngine/Rendering/BatchCullingOutputDrawCommands.hpp"
#include "UnityEngine/Rendering/BatchCullingProjectionType.hpp"
#include "UnityEngine/Rendering/BatchCullingViewType.hpp"
#include "UnityEngine/Rendering/BatchDrawCommand.hpp"
#include "UnityEngine/Rendering/BatchDrawCommandFlags.hpp"
#include "UnityEngine/Rendering/BatchDrawRange.hpp"
#include "UnityEngine/Rendering/BatchFilterSettings.hpp"
#include "UnityEngine/Rendering/BatchID.hpp"
#include "UnityEngine/Rendering/BatchMaterialID.hpp"
#include "UnityEngine/Rendering/BatchMeshID.hpp"
#include "UnityEngine/Rendering/BatchPackedCullingViewID.hpp"
#include "UnityEngine/Rendering/BatchRendererCullingOutput.hpp"
#include "UnityEngine/Rendering/BatchRendererGroup.hpp"
#include "UnityEngine/Rendering/BuiltinRenderTextureType.hpp"
#include "UnityEngine/Rendering/CameraEvent.hpp"
#include "UnityEngine/Rendering/CameraEventUtils.hpp"
#include "UnityEngine/Rendering/ColorWriteMask.hpp"
#include "UnityEngine/Rendering/CommandBuffer.hpp"
#include "UnityEngine/Rendering/CommandBufferExecutionFlags.hpp"
#include "UnityEngine/Rendering/CompareFunction.hpp"
#include "UnityEngine/Rendering/CullingSplit.hpp"
#include "UnityEngine/Rendering/GraphicsDeviceType.hpp"
#include "UnityEngine/Rendering/GraphicsSettings.hpp"
#include "UnityEngine/Rendering/GraphicsTier.hpp"
#include "UnityEngine/Rendering/IndexFormat.hpp"
#include "UnityEngine/Rendering/LODParameters.hpp"
#include "UnityEngine/Rendering/LightProbeUsage.hpp"
#include "UnityEngine/Rendering/MeshUpdateFlags.hpp"
#include "UnityEngine/Rendering/OnDemandRendering.hpp"
#include "UnityEngine/Rendering/ReflectionProbeUsage.hpp"
#include "UnityEngine/Rendering/RenderPipeline.hpp"
#include "UnityEngine/Rendering/RenderPipelineAsset.hpp"
#include "UnityEngine/Rendering/RenderPipelineManager.hpp"
#include "UnityEngine/Rendering/RenderTargetIdentifier.hpp"
#include "UnityEngine/Rendering/RenderingThreadingMode.hpp"
#include "UnityEngine/Rendering/ScriptableRenderContext.hpp"
#include "UnityEngine/Rendering/ShaderPropertyFlags.hpp"
#include "UnityEngine/Rendering/ShaderTagId.hpp"
#include "UnityEngine/Rendering/ShadowCastingMode.hpp"
#include "UnityEngine/Rendering/ShadowSamplingMode.hpp"
#include "UnityEngine/Rendering/SortingGroup.hpp"
#include "UnityEngine/Rendering/StencilOp.hpp"
#include "UnityEngine/Rendering/StencilState.hpp"
#include "UnityEngine/Rendering/SubMeshDescriptor.hpp"
#include "UnityEngine/Rendering/SupportedRenderingFeatures.hpp"
#include "UnityEngine/Rendering/TextureDimension.hpp"
#include "UnityEngine/Rendering/VertexAttribute.hpp"
#include "UnityEngine/Rendering/VertexAttributeDescriptor.hpp"
#include "UnityEngine/Rendering/VertexAttributeFormat.hpp"
#ifdef __cpp_modules
                    export module Rendering;
                    #endif
                
