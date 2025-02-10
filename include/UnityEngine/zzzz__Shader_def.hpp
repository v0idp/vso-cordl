#pragma once
// IWYU pragma private; include "UnityEngine/Shader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Shader)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
class Shader;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Shader);
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Shader
class CORDL_TYPE Shader : public ::UnityEngine::Object {
public:
// Declarations
/// @brief Method DisableKeyword, addr 0x2f6c3a4, size 0x3c, virtual false, abstract: false, final false
static inline void DisableKeyword(::StringW  keyword) ;

/// @brief Method EnableKeyword, addr 0x2f6c368, size 0x3c, virtual false, abstract: false, final false
static inline void EnableKeyword(::StringW  keyword) ;

/// @brief Method Find, addr 0x2f6c2fc, size 0x6c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Shader> Find(::StringW  name) ;

static inline ::UnityEngine::Shader* New_ctor() ;

/// @brief Method PropertyToID, addr 0x2f6b6b0, size 0x3c, virtual false, abstract: false, final false
static inline int32_t PropertyToID(::StringW  name) ;

/// @brief Method SetGlobalColor, addr 0x2f6c94c, size 0x70, virtual false, abstract: false, final false
static inline void SetGlobalColor(::StringW  name, ::UnityEngine::Color  value) ;

/// @brief Method SetGlobalFloat, addr 0x2f6c864, size 0x78, virtual false, abstract: false, final false
static inline void SetGlobalFloat(::StringW  name, float_t  value) ;

/// @brief Method SetGlobalFloatArray, addr 0x2f6ca2c, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalFloatArray(::StringW  name, ::ArrayW<float_t,::Array<float_t>*>  values) ;

/// @brief Method SetGlobalFloatArray, addr 0x2f6c5ec, size 0x104, virtual false, abstract: false, final false
static inline void SetGlobalFloatArray(int32_t  name, ::ArrayW<float_t,::Array<float_t>*>  values, int32_t  count) ;

/// @brief Method SetGlobalFloatArrayImpl, addr 0x2f6c544, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalFloatArrayImpl(int32_t  name, ::ArrayW<float_t,::Array<float_t>*>  values, int32_t  count) ;

/// @brief Method SetGlobalFloatImpl, addr 0x2f6c41c, size 0x4c, virtual false, abstract: false, final false
static inline void SetGlobalFloatImpl(int32_t  name, float_t  value) ;

/// @brief Method SetGlobalInt, addr 0x2f6c7f4, size 0x70, virtual false, abstract: false, final false
static inline void SetGlobalInt(::StringW  name, int32_t  value) ;

/// @brief Method SetGlobalTexture, addr 0x2f6c9bc, size 0x70, virtual false, abstract: false, final false
static inline void SetGlobalTexture(::StringW  name, ::UnityEngine::Texture*  value) ;

/// @brief Method SetGlobalTextureImpl, addr 0x2f6c500, size 0x44, virtual false, abstract: false, final false
static inline void SetGlobalTextureImpl(int32_t  name, ::UnityEngine::Texture*  value) ;

/// @brief Method SetGlobalVector, addr 0x2f6c8dc, size 0x70, virtual false, abstract: false, final false
static inline void SetGlobalVector(::StringW  name, ::UnityEngine::Vector4  value) ;

/// @brief Method SetGlobalVectorArray, addr 0x2f6ca80, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalVectorArray(::StringW  name, ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  values) ;

/// @brief Method SetGlobalVectorArray, addr 0x2f6c6f0, size 0x104, virtual false, abstract: false, final false
static inline void SetGlobalVectorArray(int32_t  name, ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  values, int32_t  count) ;

/// @brief Method SetGlobalVectorArrayImpl, addr 0x2f6c598, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalVectorArrayImpl(int32_t  name, ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  values, int32_t  count) ;

/// @brief Method SetGlobalVectorImpl, addr 0x2f6c468, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalVectorImpl(int32_t  name, ::UnityEngine::Vector4  value) ;

/// @brief Method SetGlobalVectorImpl_Injected, addr 0x2f6c4bc, size 0x44, virtual false, abstract: false, final false
static inline void SetGlobalVectorImpl_Injected(int32_t  name, ::ByRef<::UnityEngine::Vector4>  value) ;

/// @brief Method TagToID, addr 0x2f6c3e0, size 0x3c, virtual false, abstract: false, final false
static inline int32_t TagToID(::StringW  name) ;

/// @brief Method .ctor, addr 0x2f6cad4, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Shader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Shader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Shader(Shader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Shader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Shader(Shader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8459};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Shader, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Shader);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Shader*, "UnityEngine", "Shader");
