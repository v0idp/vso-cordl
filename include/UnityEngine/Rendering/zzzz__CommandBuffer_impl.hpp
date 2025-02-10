#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CommandBuffer.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBufferExecutionFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBuffer.InitBuffer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::Rendering::CommandBuffer::InitBuffer)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f9df40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "InitBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBuffer.ReleaseBuffer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CommandBuffer::*)()>(&::UnityEngine::Rendering::CommandBuffer::ReleaseBuffer)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f9df68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "ReleaseBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBuffer.Clear
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CommandBuffer::*)()>(&::UnityEngine::Rendering::CommandBuffer::Clear)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f9dfa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBuffer.Internal_DrawMesh
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CommandBuffer::*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, int32_t, int32_t, ::UnityEngine::MaterialPropertyBlock*)>(&::UnityEngine::Rendering::CommandBuffer::Internal_DrawMesh)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2f9dfe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "Internal_DrawMesh",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBuffer.Blit_Texture
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CommandBuffer::*)(::UnityEngine::Texture*, ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier>, ::UnityEngine::Material*, int32_t, ::UnityEngine::Vector2, ::UnityEngine::Vector2, int32_t, int32_t)>(&::UnityEngine::Rendering::CommandBuffer::Blit_Texture)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2f9e0e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "Blit_Texture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 8>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBuffer.Blit_Identifier
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CommandBuffer::*)(::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier>, ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier>, ::UnityEngine::Material*, int32_t, ::UnityEngine::Vector2, ::UnityEngine::Vector2, int32_t, int32_t)>(&::UnityEngine::Rendering::CommandBuffer::Blit_Identifier)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2f9e224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "Blit_Identifier",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 8>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBuffer.ValidateAgainstExecutionFlags
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::CommandBuffer::*)(::UnityEngine::Rendering::CommandBufferExecutionFlags, ::UnityEngine::Rendering::CommandBufferExecutionFlags)>(&::UnityEngine::Rendering::CommandBuffer::ValidateAgainstExecutionFlags)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f9e360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "ValidateAgainstExecutionFlags",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBufferExecutionFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBufferExecutionFlags>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBuffer.Finalize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CommandBuffer::*)()>(&::UnityEngine::Rendering::CommandBuffer::Finalize)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2f9e3b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBuffer.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CommandBuffer::*)()>(&::UnityEngine::Rendering::CommandBuffer::Dispose)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2f9e4b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBuffer.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CommandBuffer::*)(bool)>(&::UnityEngine::Rendering::CommandBuffer::Dispose)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f9e470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBuffer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CommandBuffer::*)()>(&::UnityEngine::Rendering::CommandBuffer::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2f9e538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBuffer.DrawMesh
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CommandBuffer::*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, int32_t, int32_t, ::UnityEngine::MaterialPropertyBlock*)>(&::UnityEngine::Rendering::CommandBuffer::DrawMesh)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x2f9e580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "DrawMesh",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBuffer.DrawMesh
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CommandBuffer::*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, int32_t, int32_t)>(&::UnityEngine::Rendering::CommandBuffer::DrawMesh)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2f9e7fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "DrawMesh",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBuffer.Blit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CommandBuffer::*)(::UnityEngine::Texture*, ::UnityEngine::Rendering::RenderTargetIdentifier)>(&::UnityEngine::Rendering::CommandBuffer::Blit)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2f9e82c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "Blit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBuffer.Blit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CommandBuffer::*)(::UnityEngine::Texture*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Material*)>(&::UnityEngine::Rendering::CommandBuffer::Blit)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2f9e8b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "Blit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBuffer.Blit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CommandBuffer::*)(::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier)>(&::UnityEngine::Rendering::CommandBuffer::Blit)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2f9e948;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "Blit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBuffer.Blit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CommandBuffer::*)(::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Material*)>(&::UnityEngine::Rendering::CommandBuffer::Blit)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2f9e9d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "Blit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBuffer.Internal_DrawMesh_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CommandBuffer::*)(::UnityEngine::Mesh*, ::ByRef<::UnityEngine::Matrix4x4>, ::UnityEngine::Material*, int32_t, int32_t, ::UnityEngine::MaterialPropertyBlock*)>(&::UnityEngine::Rendering::CommandBuffer::Internal_DrawMesh_Injected)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2f9e064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "Internal_DrawMesh_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Matrix4x4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBuffer.Blit_Texture_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CommandBuffer::*)(::UnityEngine::Texture*, ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier>, ::UnityEngine::Material*, int32_t, ::ByRef<::UnityEngine::Vector2>, ::ByRef<::UnityEngine::Vector2>, int32_t, int32_t)>(&::UnityEngine::Rendering::CommandBuffer::Blit_Texture_Injected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2f9e188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "Blit_Texture_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 8>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBuffer.Blit_Identifier_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CommandBuffer::*)(::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier>, ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier>, ::UnityEngine::Material*, int32_t, ::ByRef<::UnityEngine::Vector2>, ::ByRef<::UnityEngine::Vector2>, int32_t, int32_t)>(&::UnityEngine::Rendering::CommandBuffer::Blit_Identifier_Injected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2f9e2c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "Blit_Identifier_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 8>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::Rendering::CommandBuffer::__cordl_internal_get_m_Ptr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Ptr;
}
constexpr ::System::IntPtr const& UnityEngine::Rendering::CommandBuffer::__cordl_internal_get_m_Ptr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Ptr;
}
constexpr void UnityEngine::Rendering::CommandBuffer::__cordl_internal_set_m_Ptr(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Ptr = value;
}
inline ::System::IntPtr UnityEngine::Rendering::CommandBuffer::InitBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "InitBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::CommandBuffer::ReleaseBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "ReleaseBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::CommandBuffer::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::CommandBuffer::Internal_DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  submeshIndex, int32_t  shaderPass, ::UnityEngine::MaterialPropertyBlock*  properties)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "Internal_DrawMesh",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh, matrix, material, submeshIndex, shaderPass, properties);
}
inline void UnityEngine::Rendering::CommandBuffer::Blit_Texture(::UnityEngine::Texture*  source, ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier>  dest, ::UnityEngine::Material*  mat, int32_t  pass, ::UnityEngine::Vector2  scale, ::UnityEngine::Vector2  offset, int32_t  sourceDepthSlice, int32_t  destDepthSlice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "Blit_Texture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 8>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, dest, mat, pass, scale, offset, sourceDepthSlice, destDepthSlice);
}
inline void UnityEngine::Rendering::CommandBuffer::Blit_Identifier(::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier>  source, ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier>  dest, ::UnityEngine::Material*  mat, int32_t  pass, ::UnityEngine::Vector2  scale, ::UnityEngine::Vector2  offset, int32_t  sourceDepthSlice, int32_t  destDepthSlice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "Blit_Identifier",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 8>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, dest, mat, pass, scale, offset, sourceDepthSlice, destDepthSlice);
}
inline bool UnityEngine::Rendering::CommandBuffer::ValidateAgainstExecutionFlags(::UnityEngine::Rendering::CommandBufferExecutionFlags  requiredFlags, ::UnityEngine::Rendering::CommandBufferExecutionFlags  invalidFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "ValidateAgainstExecutionFlags",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBufferExecutionFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBufferExecutionFlags>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, requiredFlags, invalidFlags);
}
inline void UnityEngine::Rendering::CommandBuffer::Finalize()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::CommandBuffer::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::CommandBuffer::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void UnityEngine::Rendering::CommandBuffer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::CommandBuffer::DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  submeshIndex, int32_t  shaderPass, ::UnityEngine::MaterialPropertyBlock*  properties)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "DrawMesh",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh, matrix, material, submeshIndex, shaderPass, properties);
}
inline void UnityEngine::Rendering::CommandBuffer::DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  submeshIndex, int32_t  shaderPass)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "DrawMesh",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh, matrix, material, submeshIndex, shaderPass);
}
inline void UnityEngine::Rendering::CommandBuffer::Blit(::UnityEngine::Texture*  source, ::UnityEngine::Rendering::RenderTargetIdentifier  dest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "Blit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, dest);
}
inline void UnityEngine::Rendering::CommandBuffer::Blit(::UnityEngine::Texture*  source, ::UnityEngine::Rendering::RenderTargetIdentifier  dest, ::UnityEngine::Material*  mat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "Blit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, dest, mat);
}
inline void UnityEngine::Rendering::CommandBuffer::Blit(::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  dest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "Blit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, dest);
}
inline void UnityEngine::Rendering::CommandBuffer::Blit(::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  dest, ::UnityEngine::Material*  mat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "Blit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, dest, mat);
}
inline void UnityEngine::Rendering::CommandBuffer::Internal_DrawMesh_Injected(::UnityEngine::Mesh*  mesh, ::ByRef<::UnityEngine::Matrix4x4>  matrix, ::UnityEngine::Material*  material, int32_t  submeshIndex, int32_t  shaderPass, ::UnityEngine::MaterialPropertyBlock*  properties)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "Internal_DrawMesh_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Matrix4x4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh, matrix, material, submeshIndex, shaderPass, properties);
}
inline void UnityEngine::Rendering::CommandBuffer::Blit_Texture_Injected(::UnityEngine::Texture*  source, ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier>  dest, ::UnityEngine::Material*  mat, int32_t  pass, ::ByRef<::UnityEngine::Vector2>  scale, ::ByRef<::UnityEngine::Vector2>  offset, int32_t  sourceDepthSlice, int32_t  destDepthSlice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "Blit_Texture_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 8>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, dest, mat, pass, scale, offset, sourceDepthSlice, destDepthSlice);
}
inline void UnityEngine::Rendering::CommandBuffer::Blit_Identifier_Injected(::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier>  source, ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier>  dest, ::UnityEngine::Material*  mat, int32_t  pass, ::ByRef<::UnityEngine::Vector2>  scale, ::ByRef<::UnityEngine::Vector2>  offset, int32_t  sourceDepthSlice, int32_t  destDepthSlice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBuffer*>::get(),
                        "Blit_Identifier_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 8>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, dest, mat, pass, scale, offset, sourceDepthSlice, destDepthSlice);
}
inline ::UnityEngine::Rendering::CommandBuffer* UnityEngine::Rendering::CommandBuffer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::CommandBuffer*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Rendering::CommandBuffer::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::CommandBuffer::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CommandBuffer::CommandBuffer()   {
}
