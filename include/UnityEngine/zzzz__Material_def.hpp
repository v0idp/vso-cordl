#pragma once
// IWYU pragma private; include "UnityEngine/Material.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Material)
namespace UnityEngine::Rendering {
struct ShaderPropertyFlags;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
class Material;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Material);
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Material
class CORDL_TYPE Material : public ::UnityEngine::Object {
public:
// Declarations
 __declspec(property(get=get_color, put=set_color)) ::UnityEngine::Color  color;

 __declspec(property(get=get_mainTexture, put=set_mainTexture)) ::UnityW<::UnityEngine::Texture>  mainTexture;

 __declspec(property(get=get_mainTextureOffset, put=set_mainTextureOffset)) ::UnityEngine::Vector2  mainTextureOffset;

 __declspec(property(get=get_mainTextureScale, put=set_mainTextureScale)) ::UnityEngine::Vector2  mainTextureScale;

 __declspec(property(get=get_passCount)) int32_t  passCount;

 __declspec(property(put=set_renderQueue)) int32_t  renderQueue;

 __declspec(property(get=get_shader, put=set_shader)) ::UnityW<::UnityEngine::Shader>  shader;

 __declspec(property(get=get_shaderKeywords, put=set_shaderKeywords)) ::ArrayW<::StringW,::Array<::StringW>*>  shaderKeywords;

/// @brief Method ComputeCRC, addr 0x2f6dc68, size 0x3c, virtual false, abstract: false, final false
inline int32_t ComputeCRC() ;

/// @brief Method CopyPropertiesFromMaterial, addr 0x2f6db24, size 0x44, virtual false, abstract: false, final false
inline void CopyPropertiesFromMaterial(::UnityEngine::Material*  mat) ;

/// @brief Method CreateWithMaterial, addr 0x2f6cb70, size 0x44, virtual false, abstract: false, final false
static inline void CreateWithMaterial(::UnityEngine::Material*  self, ::UnityEngine::Material*  source) ;

/// @brief Method CreateWithShader, addr 0x2f6cb2c, size 0x44, virtual false, abstract: false, final false
static inline void CreateWithShader(::UnityEngine::Material*  self, ::UnityEngine::Shader*  shader) ;

/// @brief Method CreateWithString, addr 0x2f6cbb4, size 0x3c, virtual false, abstract: false, final false
static inline void CreateWithString(::UnityEngine::Material*  self) ;

/// @brief Method DisableKeyword, addr 0x2f6d8d4, size 0x44, virtual false, abstract: false, final false
inline void DisableKeyword(::StringW  keyword) ;

/// @brief Method EnableKeyword, addr 0x2f6d890, size 0x44, virtual false, abstract: false, final false
inline void EnableKeyword(::StringW  keyword) ;

/// @brief Method GetColor, addr 0x2f6cee4, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColor(::StringW  name) ;

/// @brief Method GetColor, addr 0x2f6cee0, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColor(int32_t  nameID) ;

/// @brief Method GetColorImpl, addr 0x2f6dee8, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColorImpl(int32_t  name) ;

/// @brief Method GetColorImpl_Injected, addr 0x2f6df48, size 0x54, virtual false, abstract: false, final false
inline void GetColorImpl_Injected(int32_t  name, ::ByRef<::UnityEngine::Color>  ret) ;

/// @brief Method GetFirstPropertyNameIdByAttribute, addr 0x2f6ce9c, size 0x44, virtual false, abstract: false, final false
inline int32_t GetFirstPropertyNameIdByAttribute(::UnityEngine::Rendering::ShaderPropertyFlags  attributeFlag) ;

/// @brief Method GetFloat, addr 0x2f6e5f8, size 0x70, virtual false, abstract: false, final false
inline float_t GetFloat(::StringW  name) ;

/// @brief Method GetFloat, addr 0x2f6e668, size 0x44, virtual false, abstract: false, final false
inline float_t GetFloat(int32_t  nameID) ;

/// @brief Method GetFloatImpl, addr 0x2f6dea4, size 0x44, virtual false, abstract: false, final false
inline float_t GetFloatImpl(int32_t  name) ;

/// @brief Method GetShaderKeywords, addr 0x2f6db68, size 0x3c, virtual false, abstract: false, final false
inline ::ArrayW<::StringW,::Array<::StringW>*> GetShaderKeywords() ;

/// @brief Method GetTag, addr 0x2f6d9f4, size 0x88, virtual false, abstract: false, final false
inline ::StringW GetTag(::StringW  tag, bool  searchFallbacks) ;

/// @brief Method GetTagImpl, addr 0x2f6d998, size 0x5c, virtual false, abstract: false, final false
inline ::StringW GetTagImpl(::StringW  tag, bool  currentSubShaderOnly, ::StringW  defaultValue) ;

/// @brief Method GetTexture, addr 0x2f6d178, size 0x70, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture> GetTexture(::StringW  name) ;

/// @brief Method GetTexture, addr 0x2f6d134, size 0x44, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture> GetTexture(int32_t  nameID) ;

/// @brief Method GetTextureImpl, addr 0x2f6df9c, size 0x44, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture> GetTextureImpl(int32_t  name) ;

/// @brief Method GetTextureOffset, addr 0x2f6d434, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetTextureOffset(::StringW  name) ;

/// @brief Method GetTextureOffset, addr 0x2f6d41c, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetTextureOffset(int32_t  nameID) ;

/// @brief Method GetTextureScale, addr 0x2f6d634, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetTextureScale(::StringW  name) ;

/// @brief Method GetTextureScale, addr 0x2f6d630, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetTextureScale(int32_t  nameID) ;

/// @brief Method GetTextureScaleAndOffsetImpl, addr 0x2f6e03c, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 GetTextureScaleAndOffsetImpl(int32_t  name) ;

/// @brief Method GetTextureScaleAndOffsetImpl_Injected, addr 0x2f6e09c, size 0x54, virtual false, abstract: false, final false
inline void GetTextureScaleAndOffsetImpl_Injected(int32_t  name, ::ByRef<::UnityEngine::Vector4>  ret) ;

/// @brief Method GetVector, addr 0x2f6e6ac, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 GetVector(::StringW  name) ;

/// @brief Method GetVector, addr 0x2f6e6f8, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 GetVector(int32_t  nameID) ;

/// @brief Method HasProperty, addr 0x2f6d7dc, size 0x70, virtual false, abstract: false, final false
inline bool HasProperty(::StringW  name) ;

/// @brief Method HasProperty, addr 0x2f6d798, size 0x44, virtual false, abstract: false, final false
inline bool HasProperty(int32_t  nameID) ;

/// @brief Method IsKeywordEnabled, addr 0x2f6d918, size 0x44, virtual false, abstract: false, final false
inline bool IsKeywordEnabled(::StringW  keyword) ;

/// @brief Method Lerp, addr 0x2f6da7c, size 0x64, virtual false, abstract: false, final false
inline void Lerp(::UnityEngine::Material*  start, ::UnityEngine::Material*  end, float_t  t) ;

static inline ::UnityEngine::Material* New_ctor(::StringW  contents) ;

static inline ::UnityEngine::Material* New_ctor(::UnityEngine::Shader*  shader) ;

static inline ::UnityEngine::Material* New_ctor(::UnityEngine::Material*  source) ;

/// @brief Method SetColor, addr 0x2f6d008, size 0x7c, virtual false, abstract: false, final false
inline void SetColor(::StringW  name, ::UnityEngine::Color  value) ;

/// @brief Method SetColor, addr 0x2f6d004, size 0x4, virtual false, abstract: false, final false
inline void SetColor(int32_t  nameID, ::UnityEngine::Color  value) ;

/// @brief Method SetColorImpl, addr 0x2f6dcf8, size 0x5c, virtual false, abstract: false, final false
inline void SetColorImpl(int32_t  name, ::UnityEngine::Color  value) ;

/// @brief Method SetColorImpl_Injected, addr 0x2f6dd54, size 0x54, virtual false, abstract: false, final false
inline void SetColorImpl_Injected(int32_t  name, ::ByRef<::UnityEngine::Color>  value) ;

/// @brief Method SetFloat, addr 0x2f6e428, size 0x80, virtual false, abstract: false, final false
inline void SetFloat(::StringW  name, float_t  value) ;

/// @brief Method SetFloat, addr 0x2f6e4a8, size 0x54, virtual false, abstract: false, final false
inline void SetFloat(int32_t  nameID, float_t  value) ;

/// @brief Method SetFloatImpl, addr 0x2f6dca4, size 0x54, virtual false, abstract: false, final false
inline void SetFloatImpl(int32_t  name, float_t  value) ;

/// @brief Method SetInt, addr 0x2f6e354, size 0x80, virtual false, abstract: false, final false
inline void SetInt(::StringW  name, int32_t  value) ;

/// @brief Method SetInt, addr 0x2f6e3d4, size 0x54, virtual false, abstract: false, final false
inline void SetInt(int32_t  nameID, int32_t  value) ;

/// @brief Method SetMatrix, addr 0x2f6e57c, size 0x64, virtual false, abstract: false, final false
inline void SetMatrix(int32_t  nameID, ::UnityEngine::Matrix4x4  value) ;

/// @brief Method SetMatrixImpl, addr 0x2f6dda8, size 0x54, virtual false, abstract: false, final false
inline void SetMatrixImpl(int32_t  name, ::UnityEngine::Matrix4x4  value) ;

/// @brief Method SetMatrixImpl_Injected, addr 0x2f6ddfc, size 0x54, virtual false, abstract: false, final false
inline void SetMatrixImpl_Injected(int32_t  name, ::ByRef<::UnityEngine::Matrix4x4>  value) ;

/// @brief Method SetPass, addr 0x2f6dae0, size 0x44, virtual false, abstract: false, final false
inline bool SetPass(int32_t  pass) ;

/// @brief Method SetShaderKeywords, addr 0x2f6dba4, size 0x44, virtual false, abstract: false, final false
inline void SetShaderKeywords(::ArrayW<::StringW,::Array<::StringW>*>  names) ;

/// @brief Method SetTexture, addr 0x2f6d304, size 0x80, virtual false, abstract: false, final false
inline void SetTexture(::StringW  name, ::UnityEngine::Texture*  value) ;

/// @brief Method SetTexture, addr 0x2f6d2b0, size 0x54, virtual false, abstract: false, final false
inline void SetTexture(int32_t  nameID, ::UnityEngine::Texture*  value) ;

/// @brief Method SetTextureImpl, addr 0x2f6de50, size 0x54, virtual false, abstract: false, final false
inline void SetTextureImpl(int32_t  name, ::UnityEngine::Texture*  value) ;

/// @brief Method SetTextureOffset, addr 0x2f6d540, size 0x64, virtual false, abstract: false, final false
inline void SetTextureOffset(::StringW  name, ::UnityEngine::Vector2  value) ;

/// @brief Method SetTextureOffset, addr 0x2f6d53c, size 0x4, virtual false, abstract: false, final false
inline void SetTextureOffset(int32_t  nameID, ::UnityEngine::Vector2  value) ;

/// @brief Method SetTextureOffsetImpl, addr 0x2f6e0f0, size 0x58, virtual false, abstract: false, final false
inline void SetTextureOffsetImpl(int32_t  name, ::UnityEngine::Vector2  offset) ;

/// @brief Method SetTextureOffsetImpl_Injected, addr 0x2f6e148, size 0x54, virtual false, abstract: false, final false
inline void SetTextureOffsetImpl_Injected(int32_t  name, ::ByRef<::UnityEngine::Vector2>  offset) ;

/// @brief Method SetTextureScale, addr 0x2f6d734, size 0x64, virtual false, abstract: false, final false
inline void SetTextureScale(::StringW  name, ::UnityEngine::Vector2  value) ;

/// @brief Method SetTextureScale, addr 0x2f6d730, size 0x4, virtual false, abstract: false, final false
inline void SetTextureScale(int32_t  nameID, ::UnityEngine::Vector2  value) ;

/// @brief Method SetTextureScaleImpl, addr 0x2f6e19c, size 0x58, virtual false, abstract: false, final false
inline void SetTextureScaleImpl(int32_t  name, ::UnityEngine::Vector2  scale) ;

/// @brief Method SetTextureScaleImpl_Injected, addr 0x2f6e1f4, size 0x54, virtual false, abstract: false, final false
inline void SetTextureScaleImpl_Injected(int32_t  name, ::ByRef<::UnityEngine::Vector2>  scale) ;

/// @brief Method SetVector, addr 0x2f6e4fc, size 0x7c, virtual false, abstract: false, final false
inline void SetVector(::StringW  name, ::UnityEngine::Vector4  value) ;

/// @brief Method SetVector, addr 0x2f6e578, size 0x4, virtual false, abstract: false, final false
inline void SetVector(int32_t  nameID, ::UnityEngine::Vector4  value) ;

/// @brief Method SetVectorArray, addr 0x2f6e248, size 0x10c, virtual false, abstract: false, final false
inline void SetVectorArray(int32_t  name, ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  values, int32_t  count) ;

/// @brief Method SetVectorArray, addr 0x2f6e5e0, size 0x18, virtual false, abstract: false, final false
inline void SetVectorArray(int32_t  nameID, ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  values) ;

/// @brief Method SetVectorArrayImpl, addr 0x2f6dfe0, size 0x5c, virtual false, abstract: false, final false
inline void SetVectorArrayImpl(int32_t  name, ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  values, int32_t  count) ;

/// @brief Method .ctor, addr 0x2f6cd10, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::StringW  contents) ;

/// @brief Method .ctor, addr 0x2f6cbf0, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Shader*  shader) ;

/// @brief Method .ctor, addr 0x2f6cc80, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Material*  source) ;

/// @brief Method get_color, addr 0x2f6ce10, size 0x8c, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_color() ;

/// @brief Method get_mainTexture, addr 0x2f6d084, size 0xb0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture> get_mainTexture() ;

/// @brief Method get_mainTextureOffset, addr 0x2f6d384, size 0x98, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_mainTextureOffset() ;

/// @brief Method get_mainTextureScale, addr 0x2f6d5a4, size 0x8c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_mainTextureScale() ;

/// @brief Method get_passCount, addr 0x2f6d95c, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_passCount() ;

/// @brief Method get_shader, addr 0x2f6cd90, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Shader> get_shader() ;

/// @brief Method get_shaderKeywords, addr 0x2f6dbe8, size 0x3c, virtual false, abstract: false, final false
inline ::ArrayW<::StringW,::Array<::StringW>*> get_shaderKeywords() ;

/// @brief Method set_color, addr 0x2f6cf30, size 0xd4, virtual false, abstract: false, final false
inline void set_color(::UnityEngine::Color  value) ;

/// @brief Method set_mainTexture, addr 0x2f6d1e8, size 0xc8, virtual false, abstract: false, final false
inline void set_mainTexture(::UnityEngine::Texture*  value) ;

/// @brief Method set_mainTextureOffset, addr 0x2f6d48c, size 0xb0, virtual false, abstract: false, final false
inline void set_mainTextureOffset(::UnityEngine::Vector2  value) ;

/// @brief Method set_mainTextureScale, addr 0x2f6d680, size 0xb0, virtual false, abstract: false, final false
inline void set_mainTextureScale(::UnityEngine::Vector2  value) ;

/// @brief Method set_renderQueue, addr 0x2f6d84c, size 0x44, virtual false, abstract: false, final false
inline void set_renderQueue(int32_t  value) ;

/// @brief Method set_shader, addr 0x2f6cdcc, size 0x44, virtual false, abstract: false, final false
inline void set_shader(::UnityEngine::Shader*  value) ;

/// @brief Method set_shaderKeywords, addr 0x2f6dc24, size 0x44, virtual false, abstract: false, final false
inline void set_shaderKeywords(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Material() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Material", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Material(Material && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Material", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Material(Material const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8460};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Material, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Material);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Material*, "UnityEngine", "Material");
