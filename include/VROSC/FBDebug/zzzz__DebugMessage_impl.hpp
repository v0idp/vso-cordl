#pragma once
// IWYU pragma private; include "VROSC/FBDebug/DebugMessage.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/FBDebug/zzzz__DebugMessage_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: ::VROSC::FBDebug::DebugMessage.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FBDebug::DebugMessage::*)()>(&::VROSC::FBDebug::DebugMessage::Awake)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x17de700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FBDebug::DebugMessage*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FBDebug::DebugMessage.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FBDebug::DebugMessage::*)()>(&::VROSC::FBDebug::DebugMessage::Update)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x17de75c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FBDebug::DebugMessage*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FBDebug::DebugMessage.AddMessage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, bool)>(&::VROSC::FBDebug::DebugMessage::AddMessage)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x17de7d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FBDebug::DebugMessage*>::get(),
                        "AddMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FBDebug::DebugMessage._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FBDebug::DebugMessage::*)()>(&::VROSC::FBDebug::DebugMessage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17de8f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FBDebug::DebugMessage*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& VROSC::FBDebug::DebugMessage::__cordl_internal_get__messageText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____messageText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& VROSC::FBDebug::DebugMessage::__cordl_internal_get__messageText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____messageText;
}
constexpr void VROSC::FBDebug::DebugMessage::__cordl_internal_set__messageText(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____messageText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FBDebug::DebugMessage::setStaticF__message(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "_message", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FBDebug::DebugMessage*>::get>(std::forward<::StringW>(value));
}
inline ::StringW VROSC::FBDebug::DebugMessage::getStaticF__message()  {
return ::cordl_internals::getStaticField<::StringW, "_message", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FBDebug::DebugMessage*>::get>();
}
inline void VROSC::FBDebug::DebugMessage::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FBDebug::DebugMessage*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FBDebug::DebugMessage::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FBDebug::DebugMessage*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FBDebug::DebugMessage::AddMessage(::StringW  message, bool  clear)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FBDebug::DebugMessage*>::get(),
                        "AddMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message, clear);
}
inline void VROSC::FBDebug::DebugMessage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FBDebug::DebugMessage*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::FBDebug::DebugMessage* VROSC::FBDebug::DebugMessage::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FBDebug::DebugMessage*>());
}
// Ctor Parameters []
constexpr ::VROSC::FBDebug::DebugMessage::DebugMessage()   {
}
