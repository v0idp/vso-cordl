#pragma once
// IWYU pragma private; include "VROSC/ErrorHandler.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__ErrorHandler_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "VROSC/zzzz__ErrorMessages_def.hpp"
#include "VROSC/zzzz__Error_def.hpp"
//  Writing Method size for method: ::VROSC::ErrorHandler.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ErrorHandler::*)()>(&::VROSC::ErrorHandler::Awake)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x1883e90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ErrorHandler*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ErrorHandler.GetMessage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::VROSC::Error)>(&::VROSC::ErrorHandler::GetMessage)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x1884148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ErrorHandler*>::get(),
                        "GetMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ErrorHandler.GetError
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Error (*)(int64_t)>(&::VROSC::ErrorHandler::GetError)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18842a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ErrorHandler*>::get(),
                        "GetError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ErrorHandler.GetError
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Error (*)(int32_t)>(&::VROSC::ErrorHandler::GetError)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x1884380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ErrorHandler*>::get(),
                        "GetError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ErrorHandler.GetError
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Error (*)(::System::Exception*)>(&::VROSC::ErrorHandler::GetError)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x1884488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ErrorHandler*>::get(),
                        "GetError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ErrorHandler._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ErrorHandler::*)()>(&::VROSC::ErrorHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18847a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ErrorHandler*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::ErrorMessages>& VROSC::ErrorHandler::__cordl_internal_get__errorMessages()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorMessages;
}
constexpr ::UnityW<::VROSC::ErrorMessages> const& VROSC::ErrorHandler::__cordl_internal_get__errorMessages() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorMessages;
}
constexpr void VROSC::ErrorHandler::__cordl_internal_set__errorMessages(::UnityW<::VROSC::ErrorMessages>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____errorMessages)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::ErrorHandler::setStaticF__errorsDict(::System::Collections::Generic::Dictionary_2<::VROSC::Error,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::VROSC::Error,::StringW>*, "_errorsDict", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ErrorHandler*>::get>(std::forward<::System::Collections::Generic::Dictionary_2<::VROSC::Error,::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::VROSC::Error,::StringW>* VROSC::ErrorHandler::getStaticF__errorsDict()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::VROSC::Error,::StringW>*, "_errorsDict", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ErrorHandler*>::get>();
}
inline void VROSC::ErrorHandler::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ErrorHandler*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW VROSC::ErrorHandler::GetMessage(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ErrorHandler*>::get(),
                        "GetMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, error);
}
inline ::VROSC::Error VROSC::ErrorHandler::GetError(int64_t  httpErrorCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ErrorHandler*>::get(),
                        "GetError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::Error, false>(nullptr, ___internal_method, httpErrorCode);
}
inline ::VROSC::Error VROSC::ErrorHandler::GetError(int32_t  fbErrorCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ErrorHandler*>::get(),
                        "GetError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::Error, false>(nullptr, ___internal_method, fbErrorCode);
}
inline ::VROSC::Error VROSC::ErrorHandler::GetError(::System::Exception*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ErrorHandler*>::get(),
                        "GetError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::Error, false>(nullptr, ___internal_method, e);
}
inline void VROSC::ErrorHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ErrorHandler*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ErrorHandler* VROSC::ErrorHandler::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ErrorHandler*>());
}
// Ctor Parameters []
constexpr ::VROSC::ErrorHandler::ErrorHandler()   {
}
