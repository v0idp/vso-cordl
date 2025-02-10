#pragma once
// IWYU pragma private; include "VROSC/UISpinnerData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__UISpinnerData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::VROSC::UISpinnerData.get_Header
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::UISpinnerData::*)()>(&::VROSC::UISpinnerData::get_Header)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17718d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UISpinnerData*>::get(),
                        "get_Header",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UISpinnerData.get_Values
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::VROSC::UISpinnerData::*)()>(&::VROSC::UISpinnerData::get_Values)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17718d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UISpinnerData*>::get(),
                        "get_Values",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UISpinnerData.Set
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UISpinnerData::*)(::StringW, ::System::Collections::Generic::List_1<::StringW>*)>(&::VROSC::UISpinnerData::Set)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17718e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UISpinnerData*>::get(),
                        "Set",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UISpinnerData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UISpinnerData::*)()>(&::VROSC::UISpinnerData::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x17718e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UISpinnerData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::UISpinnerData::__cordl_internal_get__header()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____header;
}
constexpr ::StringW const& VROSC::UISpinnerData::__cordl_internal_get__header() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____header;
}
constexpr void VROSC::UISpinnerData::__cordl_internal_set__header(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____header)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& VROSC::UISpinnerData::__cordl_internal_get__values()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____values;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& VROSC::UISpinnerData::__cordl_internal_get__values() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____values;
}
constexpr void VROSC::UISpinnerData::__cordl_internal_set__values(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____values)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW VROSC::UISpinnerData::get_Header()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UISpinnerData*>::get(),
                        "get_Header",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::StringW>* VROSC::UISpinnerData::get_Values()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UISpinnerData*>::get(),
                        "get_Values",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline void VROSC::UISpinnerData::Set(::StringW  header, ::System::Collections::Generic::List_1<::StringW>*  values)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UISpinnerData*>::get(),
                        "Set",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, header, values);
}
inline void VROSC::UISpinnerData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UISpinnerData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UISpinnerData* VROSC::UISpinnerData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UISpinnerData*>());
}
// Ctor Parameters []
constexpr ::VROSC::UISpinnerData::UISpinnerData()   {
}
