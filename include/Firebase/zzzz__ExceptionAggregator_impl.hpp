#pragma once
// IWYU pragma private; include "Firebase/ExceptionAggregator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/zzzz__ExceptionAggregator_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Firebase::ExceptionAggregator.get_Exceptions
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::Exception*>* (*)()>(&::Firebase::ExceptionAggregator::get_Exceptions)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1921c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::ExceptionAggregator*>::get(),
                        "get_Exceptions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::ExceptionAggregator.GetAndClearPendingExceptions
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)()>(&::Firebase::ExceptionAggregator::GetAndClearPendingExceptions)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x1921d1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::ExceptionAggregator*>::get(),
                        "GetAndClearPendingExceptions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::ExceptionAggregator.ThrowAndClearPendingExceptions
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Firebase::ExceptionAggregator::ThrowAndClearPendingExceptions)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x191fc08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::ExceptionAggregator*>::get(),
                        "ThrowAndClearPendingExceptions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::ExceptionAggregator.LogException
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)(::System::Exception*)>(&::Firebase::ExceptionAggregator::LogException)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x1921e38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::ExceptionAggregator*>::get(),
                        "LogException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::ExceptionAggregator.Wrap
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::Firebase::ExceptionAggregator::Wrap)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x191faf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::ExceptionAggregator*>::get(),
                        "Wrap",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Firebase::ExceptionAggregator::setStaticF_threadLocalExceptions(::System::Collections::Generic::List_1<::System::Exception*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Exception*>*, "threadLocalExceptions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::ExceptionAggregator*>::get>(std::forward<::System::Collections::Generic::List_1<::System::Exception*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::Exception*>* Firebase::ExceptionAggregator::getStaticF_threadLocalExceptions()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Exception*>*, "threadLocalExceptions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::ExceptionAggregator*>::get>();
}
inline ::System::Collections::Generic::List_1<::System::Exception*>* Firebase::ExceptionAggregator::get_Exceptions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::ExceptionAggregator*>::get(),
                        "get_Exceptions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Exception*>*, false>(nullptr, ___internal_method);
}
inline ::System::Exception* Firebase::ExceptionAggregator::GetAndClearPendingExceptions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::ExceptionAggregator*>::get(),
                        "GetAndClearPendingExceptions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(nullptr, ___internal_method);
}
inline void Firebase::ExceptionAggregator::ThrowAndClearPendingExceptions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::ExceptionAggregator*>::get(),
                        "ThrowAndClearPendingExceptions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::System::Exception* Firebase::ExceptionAggregator::LogException(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::ExceptionAggregator*>::get(),
                        "LogException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(nullptr, ___internal_method, exception);
}
inline void Firebase::ExceptionAggregator::Wrap(::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::ExceptionAggregator*>::get(),
                        "Wrap",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, action);
}
// Ctor Parameters []
constexpr ::Firebase::ExceptionAggregator::ExceptionAggregator()   {
}
