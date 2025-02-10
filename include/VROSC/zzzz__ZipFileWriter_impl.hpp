#pragma once
// IWYU pragma private; include "VROSC/ZipFileWriter.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__ZipFileWriter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "VROSC/zzzz__Error_def.hpp"
#include "VROSC/zzzz__ZipFileWriter_def.hpp"
//  Writing Method size for method: ::VROSC::ZipFileWriter___c__DisplayClass3_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ZipFileWriter___c__DisplayClass3_0::*)()>(&::VROSC::ZipFileWriter___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1851a50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ZipFileWriter___c__DisplayClass3_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ZipFileWriter___c__DisplayClass3_0._ExtractZipToFolder_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ZipFileWriter___c__DisplayClass3_0::*)()>(&::VROSC::ZipFileWriter___c__DisplayClass3_0::_ExtractZipToFolder_b__0)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1851a58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ZipFileWriter___c__DisplayClass3_0*>::get(),
                        "<ExtractZipToFolder>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::ZipFileWriter___c__DisplayClass3_0::__cordl_internal_get_destination()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destination;
}
constexpr ::StringW const& VROSC::ZipFileWriter___c__DisplayClass3_0::__cordl_internal_get_destination() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destination;
}
constexpr void VROSC::ZipFileWriter___c__DisplayClass3_0::__cordl_internal_set_destination(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___destination)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::ZipFileWriter___c__DisplayClass3_0::__cordl_internal_get_originPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originPath;
}
constexpr ::StringW const& VROSC::ZipFileWriter___c__DisplayClass3_0::__cordl_internal_get_originPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originPath;
}
constexpr void VROSC::ZipFileWriter___c__DisplayClass3_0::__cordl_internal_set_originPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___originPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::ZipFileWriter*& VROSC::ZipFileWriter___c__DisplayClass3_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::VROSC::ZipFileWriter* const& VROSC::ZipFileWriter___c__DisplayClass3_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::ZipFileWriter___c__DisplayClass3_0::__cordl_internal_set___4__this(::VROSC::ZipFileWriter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::ZipFileWriter___c__DisplayClass3_0::__cordl_internal_get_successCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successCallback;
}
constexpr ::System::Action* const& VROSC::ZipFileWriter___c__DisplayClass3_0::__cordl_internal_get_successCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successCallback;
}
constexpr void VROSC::ZipFileWriter___c__DisplayClass3_0::__cordl_internal_set_successCallback(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___successCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::ZipFileWriter___c__DisplayClass3_0::__cordl_internal_get_failureCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failureCallback;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::ZipFileWriter___c__DisplayClass3_0::__cordl_internal_get_failureCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failureCallback;
}
constexpr void VROSC::ZipFileWriter___c__DisplayClass3_0::__cordl_internal_set_failureCallback(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___failureCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::ZipFileWriter___c__DisplayClass3_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ZipFileWriter___c__DisplayClass3_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ZipFileWriter___c__DisplayClass3_0::_ExtractZipToFolder_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ZipFileWriter___c__DisplayClass3_0*>::get(),
                        "<ExtractZipToFolder>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ZipFileWriter___c__DisplayClass3_0* VROSC::ZipFileWriter___c__DisplayClass3_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ZipFileWriter___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::ZipFileWriter___c__DisplayClass3_0::ZipFileWriter___c__DisplayClass3_0()   {
}
//  Writing Method size for method: ::VROSC::ZipFileWriter___c__DisplayClass3_1._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ZipFileWriter___c__DisplayClass3_1::*)()>(&::VROSC::ZipFileWriter___c__DisplayClass3_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1851c78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ZipFileWriter___c__DisplayClass3_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ZipFileWriter___c__DisplayClass3_1._ExtractZipToFolder_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ZipFileWriter___c__DisplayClass3_1::*)()>(&::VROSC::ZipFileWriter___c__DisplayClass3_1::_ExtractZipToFolder_b__1)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1851c80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ZipFileWriter___c__DisplayClass3_1*>::get(),
                        "<ExtractZipToFolder>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Exception*& VROSC::ZipFileWriter___c__DisplayClass3_1::__cordl_internal_get_e()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___e;
}
constexpr ::System::Exception* const& VROSC::ZipFileWriter___c__DisplayClass3_1::__cordl_internal_get_e() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___e;
}
constexpr void VROSC::ZipFileWriter___c__DisplayClass3_1::__cordl_internal_set_e(::System::Exception*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___e)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::ZipFileWriter___c__DisplayClass3_0*& VROSC::ZipFileWriter___c__DisplayClass3_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::VROSC::ZipFileWriter___c__DisplayClass3_0* const& VROSC::ZipFileWriter___c__DisplayClass3_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void VROSC::ZipFileWriter___c__DisplayClass3_1::__cordl_internal_set_CS$__8__locals1(::VROSC::ZipFileWriter___c__DisplayClass3_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CS$__8__locals1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::ZipFileWriter___c__DisplayClass3_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ZipFileWriter___c__DisplayClass3_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ZipFileWriter___c__DisplayClass3_1::_ExtractZipToFolder_b__1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ZipFileWriter___c__DisplayClass3_1*>::get(),
                        "<ExtractZipToFolder>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ZipFileWriter___c__DisplayClass3_1* VROSC::ZipFileWriter___c__DisplayClass3_1::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ZipFileWriter___c__DisplayClass3_1*>());
}
// Ctor Parameters []
constexpr ::VROSC::ZipFileWriter___c__DisplayClass3_1::ZipFileWriter___c__DisplayClass3_1()   {
}
//  Writing Method size for method: ::VROSC::ZipFileWriter___c__DisplayClass4_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ZipFileWriter___c__DisplayClass4_0::*)()>(&::VROSC::ZipFileWriter___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1851d04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ZipFileWriter___c__DisplayClass4_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ZipFileWriter___c__DisplayClass4_0._CompressFolderToZip_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ZipFileWriter___c__DisplayClass4_0::*)()>(&::VROSC::ZipFileWriter___c__DisplayClass4_0::_CompressFolderToZip_b__0)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x1851d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ZipFileWriter___c__DisplayClass4_0*>::get(),
                        "<CompressFolderToZip>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::ZipFileWriter___c__DisplayClass4_0::__cordl_internal_get_destinationPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationPath;
}
constexpr ::StringW const& VROSC::ZipFileWriter___c__DisplayClass4_0::__cordl_internal_get_destinationPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationPath;
}
constexpr void VROSC::ZipFileWriter___c__DisplayClass4_0::__cordl_internal_set_destinationPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___destinationPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::ZipFileWriter___c__DisplayClass4_0::__cordl_internal_get_origin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___origin;
}
constexpr ::StringW const& VROSC::ZipFileWriter___c__DisplayClass4_0::__cordl_internal_get_origin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___origin;
}
constexpr void VROSC::ZipFileWriter___c__DisplayClass4_0::__cordl_internal_set_origin(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___origin)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::ZipFileWriter*& VROSC::ZipFileWriter___c__DisplayClass4_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::VROSC::ZipFileWriter* const& VROSC::ZipFileWriter___c__DisplayClass4_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::ZipFileWriter___c__DisplayClass4_0::__cordl_internal_set___4__this(::VROSC::ZipFileWriter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::ZipFileWriter___c__DisplayClass4_0::__cordl_internal_get_successCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successCallback;
}
constexpr ::System::Action* const& VROSC::ZipFileWriter___c__DisplayClass4_0::__cordl_internal_get_successCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successCallback;
}
constexpr void VROSC::ZipFileWriter___c__DisplayClass4_0::__cordl_internal_set_successCallback(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___successCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::ZipFileWriter___c__DisplayClass4_0::__cordl_internal_get_failureCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failureCallback;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::ZipFileWriter___c__DisplayClass4_0::__cordl_internal_get_failureCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failureCallback;
}
constexpr void VROSC::ZipFileWriter___c__DisplayClass4_0::__cordl_internal_set_failureCallback(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___failureCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::ZipFileWriter___c__DisplayClass4_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ZipFileWriter___c__DisplayClass4_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ZipFileWriter___c__DisplayClass4_0::_CompressFolderToZip_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ZipFileWriter___c__DisplayClass4_0*>::get(),
                        "<CompressFolderToZip>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ZipFileWriter___c__DisplayClass4_0* VROSC::ZipFileWriter___c__DisplayClass4_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ZipFileWriter___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::ZipFileWriter___c__DisplayClass4_0::ZipFileWriter___c__DisplayClass4_0()   {
}
//  Writing Method size for method: ::VROSC::ZipFileWriter___c__DisplayClass4_1._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ZipFileWriter___c__DisplayClass4_1::*)()>(&::VROSC::ZipFileWriter___c__DisplayClass4_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1851f30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ZipFileWriter___c__DisplayClass4_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ZipFileWriter___c__DisplayClass4_1._CompressFolderToZip_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ZipFileWriter___c__DisplayClass4_1::*)()>(&::VROSC::ZipFileWriter___c__DisplayClass4_1::_CompressFolderToZip_b__1)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1851f38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ZipFileWriter___c__DisplayClass4_1*>::get(),
                        "<CompressFolderToZip>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Exception*& VROSC::ZipFileWriter___c__DisplayClass4_1::__cordl_internal_get_e()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___e;
}
constexpr ::System::Exception* const& VROSC::ZipFileWriter___c__DisplayClass4_1::__cordl_internal_get_e() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___e;
}
constexpr void VROSC::ZipFileWriter___c__DisplayClass4_1::__cordl_internal_set_e(::System::Exception*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___e)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::ZipFileWriter___c__DisplayClass4_0*& VROSC::ZipFileWriter___c__DisplayClass4_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::VROSC::ZipFileWriter___c__DisplayClass4_0* const& VROSC::ZipFileWriter___c__DisplayClass4_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void VROSC::ZipFileWriter___c__DisplayClass4_1::__cordl_internal_set_CS$__8__locals1(::VROSC::ZipFileWriter___c__DisplayClass4_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CS$__8__locals1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::ZipFileWriter___c__DisplayClass4_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ZipFileWriter___c__DisplayClass4_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ZipFileWriter___c__DisplayClass4_1::_CompressFolderToZip_b__1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ZipFileWriter___c__DisplayClass4_1*>::get(),
                        "<CompressFolderToZip>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ZipFileWriter___c__DisplayClass4_1* VROSC::ZipFileWriter___c__DisplayClass4_1::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ZipFileWriter___c__DisplayClass4_1*>());
}
// Ctor Parameters []
constexpr ::VROSC::ZipFileWriter___c__DisplayClass4_1::ZipFileWriter___c__DisplayClass4_1()   {
}
//  Writing Method size for method: ::VROSC::ZipFileWriter__CompressFolderToZip_d__4.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ZipFileWriter__CompressFolderToZip_d__4::*)()>(&::VROSC::ZipFileWriter__CompressFolderToZip_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x1851fbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ZipFileWriter__CompressFolderToZip_d__4>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ZipFileWriter__CompressFolderToZip_d__4.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ZipFileWriter__CompressFolderToZip_d__4::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::ZipFileWriter__CompressFolderToZip_d__4::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x18522c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ZipFileWriter__CompressFolderToZip_d__4>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::ZipFileWriter__CompressFolderToZip_d__4::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ZipFileWriter__CompressFolderToZip_d__4>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ZipFileWriter__CompressFolderToZip_d__4::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ZipFileWriter__CompressFolderToZip_d__4>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::ZipFileWriter__CompressFolderToZip_d__4::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::ZipFileWriter__CompressFolderToZip_d__4::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "origin", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::VROSC::ZipFileWriter*", modifiers: "", def_value: Some("{}") }, CppParam { name: "successCallback", ty: "::System::Action*", modifiers: "", def_value: Some("{}") }, CppParam { name: "failureCallback", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "destination", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::ZipFileWriter__CompressFolderToZip_d__4::ZipFileWriter__CompressFolderToZip_d__4(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::StringW  origin, ::VROSC::ZipFileWriter*  __4__this, ::System::Action*  successCallback, ::System::Action_1<::VROSC::Error>*  failureCallback, ::StringW  destination, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->origin = origin;
this->__4__this = __4__this;
this->successCallback = successCallback;
this->failureCallback = failureCallback;
this->destination = destination;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::ZipFileWriter__CompressFolderToZip_d__4::ZipFileWriter__CompressFolderToZip_d__4()   {
}
//  Writing Method size for method: ::VROSC::ZipFileWriter__ExtractZipToFolder_d__3.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ZipFileWriter__ExtractZipToFolder_d__3::*)()>(&::VROSC::ZipFileWriter__ExtractZipToFolder_d__3::MoveNext)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x1852328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ZipFileWriter__ExtractZipToFolder_d__3>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ZipFileWriter__ExtractZipToFolder_d__3.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ZipFileWriter__ExtractZipToFolder_d__3::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::ZipFileWriter__ExtractZipToFolder_d__3::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1852624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ZipFileWriter__ExtractZipToFolder_d__3>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::ZipFileWriter__ExtractZipToFolder_d__3::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ZipFileWriter__ExtractZipToFolder_d__3>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ZipFileWriter__ExtractZipToFolder_d__3::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ZipFileWriter__ExtractZipToFolder_d__3>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::ZipFileWriter__ExtractZipToFolder_d__3::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::ZipFileWriter__ExtractZipToFolder_d__3::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "destination", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::VROSC::ZipFileWriter*", modifiers: "", def_value: Some("{}") }, CppParam { name: "successCallback", ty: "::System::Action*", modifiers: "", def_value: Some("{}") }, CppParam { name: "failureCallback", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "origin", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::ZipFileWriter__ExtractZipToFolder_d__3::ZipFileWriter__ExtractZipToFolder_d__3(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::StringW  destination, ::VROSC::ZipFileWriter*  __4__this, ::System::Action*  successCallback, ::System::Action_1<::VROSC::Error>*  failureCallback, ::StringW  origin, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->destination = destination;
this->__4__this = __4__this;
this->successCallback = successCallback;
this->failureCallback = failureCallback;
this->origin = origin;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::ZipFileWriter__ExtractZipToFolder_d__3::ZipFileWriter__ExtractZipToFolder_d__3()   {
}
//  Writing Method size for method: ::VROSC::ZipFileWriter.Tick
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ZipFileWriter::*)()>(&::VROSC::ZipFileWriter::Tick)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x184b358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ZipFileWriter*>::get(),
                        "Tick",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ZipFileWriter.ExtractZipToFolder
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::VROSC::ZipFileWriter::*)(::StringW, ::StringW, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::ZipFileWriter::ExtractZipToFolder)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x184fb9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ZipFileWriter*>::get(),
                        "ExtractZipToFolder",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ZipFileWriter.CompressFolderToZip
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::VROSC::ZipFileWriter::*)(::StringW, ::StringW, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::ZipFileWriter::CompressFolderToZip)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x1851528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ZipFileWriter*>::get(),
                        "CompressFolderToZip",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ZipFileWriter.DeleteZip
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ZipFileWriter::*)(::StringW)>(&::VROSC::ZipFileWriter::DeleteZip)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x184d42c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ZipFileWriter*>::get(),
                        "DeleteZip",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ZipFileWriter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ZipFileWriter::*)()>(&::VROSC::ZipFileWriter::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x184d91c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ZipFileWriter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Action*>*& VROSC::ZipFileWriter::__cordl_internal_get__zipCallbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zipCallbacks;
}
constexpr ::System::Collections::Generic::List_1<::System::Action*>* const& VROSC::ZipFileWriter::__cordl_internal_get__zipCallbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zipCallbacks;
}
constexpr void VROSC::ZipFileWriter::__cordl_internal_set__zipCallbacks(::System::Collections::Generic::List_1<::System::Action*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____zipCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::ZipFileWriter::Tick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ZipFileWriter*>::get(),
                        "Tick",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* VROSC::ZipFileWriter::ExtractZipToFolder(::StringW  origin, ::StringW  destination, ::System::Action*  successCallback, ::System::Action_1<::VROSC::Error>*  failureCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ZipFileWriter*>::get(),
                        "ExtractZipToFolder",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, origin, destination, successCallback, failureCallback);
}
inline ::System::Threading::Tasks::Task* VROSC::ZipFileWriter::CompressFolderToZip(::StringW  origin, ::StringW  destination, ::System::Action*  successCallback, ::System::Action_1<::VROSC::Error>*  failureCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ZipFileWriter*>::get(),
                        "CompressFolderToZip",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, origin, destination, successCallback, failureCallback);
}
inline void VROSC::ZipFileWriter::DeleteZip(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ZipFileWriter*>::get(),
                        "DeleteZip",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, path);
}
inline void VROSC::ZipFileWriter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ZipFileWriter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ZipFileWriter* VROSC::ZipFileWriter::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ZipFileWriter*>());
}
// Ctor Parameters []
constexpr ::VROSC::ZipFileWriter::ZipFileWriter()   {
}
