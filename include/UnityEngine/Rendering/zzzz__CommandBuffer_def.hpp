#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CommandBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CommandBuffer)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Rendering {
struct CommandBufferExecutionFlags;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class CommandBuffer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::CommandBuffer);
// Dependencies System.IDisposable, System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.CommandBuffer
class CORDL_TYPE CommandBuffer : public ::System::Object {
public:
// Declarations
/// @brief Field m_Ptr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Ptr, put=__cordl_internal_set_m_Ptr)) ::System::IntPtr  m_Ptr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Blit, addr 0x2f9e948, size 0x8c, virtual false, abstract: false, final false
inline void Blit(::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  dest) ;

/// @brief Method Blit, addr 0x2f9e9d4, size 0x90, virtual false, abstract: false, final false
inline void Blit(::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  dest, ::UnityEngine::Material*  mat) ;

/// @brief Method Blit, addr 0x2f9e82c, size 0x8c, virtual false, abstract: false, final false
inline void Blit(::UnityEngine::Texture*  source, ::UnityEngine::Rendering::RenderTargetIdentifier  dest) ;

/// @brief Method Blit, addr 0x2f9e8b8, size 0x90, virtual false, abstract: false, final false
inline void Blit(::UnityEngine::Texture*  source, ::UnityEngine::Rendering::RenderTargetIdentifier  dest, ::UnityEngine::Material*  mat) ;

/// @brief Method Blit_Identifier, addr 0x2f9e224, size 0xa0, virtual false, abstract: false, final false
inline void Blit_Identifier(::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier>  source, ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier>  dest, ::UnityEngine::Material*  mat, int32_t  pass, ::UnityEngine::Vector2  scale, ::UnityEngine::Vector2  offset, int32_t  sourceDepthSlice, int32_t  destDepthSlice) ;

/// @brief Method Blit_Identifier_Injected, addr 0x2f9e2c4, size 0x9c, virtual false, abstract: false, final false
inline void Blit_Identifier_Injected(::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier>  source, ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier>  dest, ::UnityEngine::Material*  mat, int32_t  pass, ::ByRef<::UnityEngine::Vector2>  scale, ::ByRef<::UnityEngine::Vector2>  offset, int32_t  sourceDepthSlice, int32_t  destDepthSlice) ;

/// @brief Method Blit_Texture, addr 0x2f9e0e8, size 0xa0, virtual false, abstract: false, final false
inline void Blit_Texture(::UnityEngine::Texture*  source, ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier>  dest, ::UnityEngine::Material*  mat, int32_t  pass, ::UnityEngine::Vector2  scale, ::UnityEngine::Vector2  offset, int32_t  sourceDepthSlice, int32_t  destDepthSlice) ;

/// @brief Method Blit_Texture_Injected, addr 0x2f9e188, size 0x9c, virtual false, abstract: false, final false
inline void Blit_Texture_Injected(::UnityEngine::Texture*  source, ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier>  dest, ::UnityEngine::Material*  mat, int32_t  pass, ::ByRef<::UnityEngine::Vector2>  scale, ::ByRef<::UnityEngine::Vector2>  offset, int32_t  sourceDepthSlice, int32_t  destDepthSlice) ;

/// @brief Method Clear, addr 0x2f9dfa4, size 0x3c, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Dispose, addr 0x2f9e4b4, size 0x84, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x2f9e470, size 0x44, virtual false, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method DrawMesh, addr 0x2f9e7fc, size 0x30, virtual false, abstract: false, final false
inline void DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  submeshIndex, int32_t  shaderPass) ;

/// @brief Method DrawMesh, addr 0x2f9e580, size 0x27c, virtual false, abstract: false, final false
inline void DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  submeshIndex, int32_t  shaderPass, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method Finalize, addr 0x2f9e3b4, size 0xbc, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method InitBuffer, addr 0x2f9df40, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr InitBuffer() ;

/// @brief Method Internal_DrawMesh, addr 0x2f9dfe0, size 0x84, virtual false, abstract: false, final false
inline void Internal_DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  submeshIndex, int32_t  shaderPass, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method Internal_DrawMesh_Injected, addr 0x2f9e064, size 0x84, virtual false, abstract: false, final false
inline void Internal_DrawMesh_Injected(::UnityEngine::Mesh*  mesh, ::ByRef<::UnityEngine::Matrix4x4>  matrix, ::UnityEngine::Material*  material, int32_t  submeshIndex, int32_t  shaderPass, ::UnityEngine::MaterialPropertyBlock*  properties) ;

static inline ::UnityEngine::Rendering::CommandBuffer* New_ctor() ;

/// @brief Method ReleaseBuffer, addr 0x2f9df68, size 0x3c, virtual false, abstract: false, final false
inline void ReleaseBuffer() ;

/// @brief Method ValidateAgainstExecutionFlags, addr 0x2f9e360, size 0x54, virtual false, abstract: false, final false
inline bool ValidateAgainstExecutionFlags(::UnityEngine::Rendering::CommandBufferExecutionFlags  requiredFlags, ::UnityEngine::Rendering::CommandBufferExecutionFlags  invalidFlags) ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr() ;

constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x2f9e538, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CommandBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CommandBuffer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CommandBuffer(CommandBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommandBuffer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommandBuffer(CommandBuffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8889};

/// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_Ptr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CommandBuffer, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CommandBuffer, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::CommandBuffer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CommandBuffer*, "UnityEngine.Rendering", "CommandBuffer");
