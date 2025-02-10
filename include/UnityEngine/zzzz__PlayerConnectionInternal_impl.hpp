#pragma once
// IWYU pragma private; include "UnityEngine/PlayerConnectionInternal.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__IPlayerEditorConnectionNative_impl.hpp"
#include "UnityEngine/zzzz__PlayerConnectionInternal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.UnityEngine_IPlayerEditorConnectionNative_SendMessage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::PlayerConnectionInternal::*)(::System::Guid, ::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t)>(&::UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_SendMessage)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2f84f28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerConnectionInternal*>::get(),
                        "UnityEngine.IPlayerEditorConnectionNative.SendMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.UnityEngine_IPlayerEditorConnectionNative_TrySendMessage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::PlayerConnectionInternal::*)(::System::Guid, ::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t)>(&::UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_TrySendMessage)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2f850a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerConnectionInternal*>::get(),
                        "UnityEngine.IPlayerEditorConnectionNative.TrySendMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.UnityEngine_IPlayerEditorConnectionNative_Poll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::PlayerConnectionInternal::*)()>(&::UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_Poll)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f85224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerConnectionInternal*>::get(),
                        "UnityEngine.IPlayerEditorConnectionNative.Poll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.UnityEngine_IPlayerEditorConnectionNative_RegisterInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::PlayerConnectionInternal::*)(::System::Guid)>(&::UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_RegisterInternal)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2f85274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerConnectionInternal*>::get(),
                        "UnityEngine.IPlayerEditorConnectionNative.RegisterInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.UnityEngine_IPlayerEditorConnectionNative_UnregisterInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::PlayerConnectionInternal::*)(::System::Guid)>(&::UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_UnregisterInternal)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2f85334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerConnectionInternal*>::get(),
                        "UnityEngine.IPlayerEditorConnectionNative.UnregisterInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.UnityEngine_IPlayerEditorConnectionNative_Initialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::PlayerConnectionInternal::*)()>(&::UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_Initialize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f853f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerConnectionInternal*>::get(),
                        "UnityEngine.IPlayerEditorConnectionNative.Initialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.UnityEngine_IPlayerEditorConnectionNative_IsConnected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::PlayerConnectionInternal::*)()>(&::UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_IsConnected)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f85444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerConnectionInternal*>::get(),
                        "UnityEngine.IPlayerEditorConnectionNative.IsConnected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.UnityEngine_IPlayerEditorConnectionNative_DisconnectAll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::PlayerConnectionInternal::*)()>(&::UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_DisconnectAll)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f85494;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerConnectionInternal*>::get(),
                        "UnityEngine.IPlayerEditorConnectionNative.DisconnectAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.IsConnected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::PlayerConnectionInternal::IsConnected)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f8546c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerConnectionInternal*>::get(),
                        "IsConnected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.Initialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::PlayerConnectionInternal::Initialize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f8541c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerConnectionInternal*>::get(),
                        "Initialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.RegisterInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::UnityEngine::PlayerConnectionInternal::RegisterInternal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f852f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerConnectionInternal*>::get(),
                        "RegisterInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.UnregisterInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::UnityEngine::PlayerConnectionInternal::UnregisterInternal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f853b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerConnectionInternal*>::get(),
                        "UnregisterInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.SendMessage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t)>(&::UnityEngine::PlayerConnectionInternal::SendMessage)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f85050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerConnectionInternal*>::get(),
                        "SendMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.TrySendMessage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t)>(&::UnityEngine::PlayerConnectionInternal::TrySendMessage)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f851d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerConnectionInternal*>::get(),
                        "TrySendMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.PollInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::PlayerConnectionInternal::PollInternal)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f8524c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerConnectionInternal*>::get(),
                        "PollInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.DisconnectAll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::PlayerConnectionInternal::DisconnectAll)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f854bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerConnectionInternal*>::get(),
                        "DisconnectAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::PlayerConnectionInternal::*)()>(&::UnityEngine::PlayerConnectionInternal::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f854e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerConnectionInternal*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_SendMessage(::System::Guid  messageId, ::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerConnectionInternal*>::get(),
                        "UnityEngine.IPlayerEditorConnectionNative.SendMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, messageId, data, playerId);
}
inline bool UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_TrySendMessage(::System::Guid  messageId, ::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerConnectionInternal*>::get(),
                        "UnityEngine.IPlayerEditorConnectionNative.TrySendMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, messageId, data, playerId);
}
inline void UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_Poll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerConnectionInternal*>::get(),
                        "UnityEngine.IPlayerEditorConnectionNative.Poll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_RegisterInternal(::System::Guid  messageId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerConnectionInternal*>::get(),
                        "UnityEngine.IPlayerEditorConnectionNative.RegisterInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, messageId);
}
inline void UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_UnregisterInternal(::System::Guid  messageId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerConnectionInternal*>::get(),
                        "UnityEngine.IPlayerEditorConnectionNative.UnregisterInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, messageId);
}
inline void UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerConnectionInternal*>::get(),
                        "UnityEngine.IPlayerEditorConnectionNative.Initialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_IsConnected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerConnectionInternal*>::get(),
                        "UnityEngine.IPlayerEditorConnectionNative.IsConnected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_DisconnectAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerConnectionInternal*>::get(),
                        "UnityEngine.IPlayerEditorConnectionNative.DisconnectAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::PlayerConnectionInternal::IsConnected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerConnectionInternal*>::get(),
                        "IsConnected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void UnityEngine::PlayerConnectionInternal::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerConnectionInternal*>::get(),
                        "Initialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::PlayerConnectionInternal::RegisterInternal(::StringW  messageId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerConnectionInternal*>::get(),
                        "RegisterInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, messageId);
}
inline void UnityEngine::PlayerConnectionInternal::UnregisterInternal(::StringW  messageId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerConnectionInternal*>::get(),
                        "UnregisterInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, messageId);
}
inline void UnityEngine::PlayerConnectionInternal::SendMessage(::StringW  messageId, ::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerConnectionInternal*>::get(),
                        "SendMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, messageId, data, playerId);
}
inline bool UnityEngine::PlayerConnectionInternal::TrySendMessage(::StringW  messageId, ::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerConnectionInternal*>::get(),
                        "TrySendMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, messageId, data, playerId);
}
inline void UnityEngine::PlayerConnectionInternal::PollInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerConnectionInternal*>::get(),
                        "PollInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::PlayerConnectionInternal::DisconnectAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerConnectionInternal*>::get(),
                        "DisconnectAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::PlayerConnectionInternal::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PlayerConnectionInternal*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::PlayerConnectionInternal* UnityEngine::PlayerConnectionInternal::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::PlayerConnectionInternal*>());
}
/// @brief Convert operator to "::UnityEngine::IPlayerEditorConnectionNative"
constexpr  UnityEngine::PlayerConnectionInternal::operator ::UnityEngine::IPlayerEditorConnectionNative*() noexcept {
return static_cast<::UnityEngine::IPlayerEditorConnectionNative*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::IPlayerEditorConnectionNative"
constexpr ::UnityEngine::IPlayerEditorConnectionNative* UnityEngine::PlayerConnectionInternal::i___UnityEngine__IPlayerEditorConnectionNative() noexcept {
return static_cast<::UnityEngine::IPlayerEditorConnectionNative*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::PlayerConnectionInternal::PlayerConnectionInternal()   {
}
