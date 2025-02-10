#pragma once
// IWYU pragma private; include "UnityEngine/MaterialPropertyBlock.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialPropertyBlock)
namespace System {
struct IntPtr;
}
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
class MaterialPropertyBlock;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::MaterialPropertyBlock);
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.MaterialPropertyBlock
class CORDL_TYPE MaterialPropertyBlock : public ::System::Object {
public:
// Declarations
/// @brief Field m_Ptr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Ptr, put=__cordl_internal_set_m_Ptr)) ::System::IntPtr  m_Ptr;

/// @brief Method Clear, addr 0x2f6b258, size 0x40, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Clear, addr 0x2f6b214, size 0x44, virtual false, abstract: false, final false
inline void Clear(bool  keepMemory) ;

/// @brief Method CreateImpl, addr 0x2f6b1b0, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateImpl() ;

/// @brief Method DestroyImpl, addr 0x2f6b1d8, size 0x3c, virtual false, abstract: false, final false
static inline void DestroyImpl(::System::IntPtr  mpb) ;

/// @brief Method Dispose, addr 0x2f6b58c, size 0xa4, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method Finalize, addr 0x2f6b4f8, size 0x94, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetFloat, addr 0x2f6b9a0, size 0x70, virtual false, abstract: false, final false
inline float_t GetFloat(::StringW  name) ;

/// @brief Method GetFloatImpl, addr 0x2f6aeac, size 0x44, virtual false, abstract: false, final false
inline float_t GetFloatImpl(int32_t  name) ;

static inline ::UnityEngine::MaterialPropertyBlock* New_ctor() ;

/// @brief Method SetColor, addr 0x2f6b7e8, size 0x7c, virtual false, abstract: false, final false
inline void SetColor(::StringW  name, ::UnityEngine::Color  value) ;

/// @brief Method SetColorImpl, addr 0x2f6aff4, size 0x5c, virtual false, abstract: false, final false
inline void SetColorImpl(int32_t  name, ::UnityEngine::Color  value) ;

/// @brief Method SetColorImpl_Injected, addr 0x2f6b050, size 0x54, virtual false, abstract: false, final false
inline void SetColorImpl_Injected(int32_t  name, ::ByRef<::UnityEngine::Color>  value) ;

/// @brief Method SetFloat, addr 0x2f6b6ec, size 0x80, virtual false, abstract: false, final false
inline void SetFloat(::StringW  name, float_t  value) ;

/// @brief Method SetFloatArray, addr 0x2f6b8b8, size 0x68, virtual false, abstract: false, final false
inline void SetFloatArray(::StringW  name, ::ArrayW<float_t,::Array<float_t>*>  values) ;

/// @brief Method SetFloatArray, addr 0x2f6b298, size 0x10c, virtual false, abstract: false, final false
inline void SetFloatArray(int32_t  name, ::ArrayW<float_t,::Array<float_t>*>  values, int32_t  count) ;

/// @brief Method SetFloatArrayImpl, addr 0x2f6b0f8, size 0x5c, virtual false, abstract: false, final false
inline void SetFloatArrayImpl(int32_t  name, ::ArrayW<float_t,::Array<float_t>*>  values, int32_t  count) ;

/// @brief Method SetFloatImpl, addr 0x2f6aef0, size 0x54, virtual false, abstract: false, final false
inline void SetFloatImpl(int32_t  name, float_t  value) ;

/// @brief Method SetInt, addr 0x2f6b630, size 0x80, virtual false, abstract: false, final false
inline void SetInt(::StringW  name, int32_t  value) ;

/// @brief Method SetTexture, addr 0x2f6b864, size 0x54, virtual false, abstract: false, final false
inline void SetTexture(int32_t  nameID, ::UnityEngine::Texture*  value) ;

/// @brief Method SetTextureImpl, addr 0x2f6b0a4, size 0x54, virtual false, abstract: false, final false
inline void SetTextureImpl(int32_t  name, ::UnityEngine::Texture*  value) ;

/// @brief Method SetVector, addr 0x2f6b76c, size 0x7c, virtual false, abstract: false, final false
inline void SetVector(::StringW  name, ::UnityEngine::Vector4  value) ;

/// @brief Method SetVectorArray, addr 0x2f6b920, size 0x68, virtual false, abstract: false, final false
inline void SetVectorArray(::StringW  name, ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  values) ;

/// @brief Method SetVectorArray, addr 0x2f6b3a4, size 0x10c, virtual false, abstract: false, final false
inline void SetVectorArray(int32_t  name, ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  values, int32_t  count) ;

/// @brief Method SetVectorArray, addr 0x2f6b988, size 0x18, virtual false, abstract: false, final false
inline void SetVectorArray(int32_t  nameID, ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  values) ;

/// @brief Method SetVectorArrayImpl, addr 0x2f6b154, size 0x5c, virtual false, abstract: false, final false
inline void SetVectorArrayImpl(int32_t  name, ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  values, int32_t  count) ;

/// @brief Method SetVectorImpl, addr 0x2f6af44, size 0x5c, virtual false, abstract: false, final false
inline void SetVectorImpl(int32_t  name, ::UnityEngine::Vector4  value) ;

/// @brief Method SetVectorImpl_Injected, addr 0x2f6afa0, size 0x54, virtual false, abstract: false, final false
inline void SetVectorImpl_Injected(int32_t  name, ::ByRef<::UnityEngine::Vector4>  value) ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr() ;

constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x2f6b4b0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaterialPropertyBlock() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlock", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialPropertyBlock(MaterialPropertyBlock && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlock", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialPropertyBlock(MaterialPropertyBlock const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8456};

/// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_Ptr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::MaterialPropertyBlock, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::MaterialPropertyBlock, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::MaterialPropertyBlock);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MaterialPropertyBlock*, "UnityEngine", "MaterialPropertyBlock");
