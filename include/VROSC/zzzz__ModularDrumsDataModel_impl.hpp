#pragma once
// IWYU pragma private; include "VROSC/ModularDrumsDataModel.hpp"
#include "VROSC/zzzz__InstrumentDataModel_impl.hpp"
#include "VROSC/zzzz__ModularDrumsDataModel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "VROSC/zzzz__EmpadDataModel_def.hpp"
//  Writing Method size for method: ::VROSC::ModularDrumsDataModel.get_Key
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::ModularDrumsDataModel::*)()>(&::VROSC::ModularDrumsDataModel::get_Key)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1840f80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ModularDrumsDataModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ModularDrumsDataModel*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ModularDrumsDataModel.get_Version
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::ModularDrumsDataModel::*)()>(&::VROSC::ModularDrumsDataModel::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1840fc0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ModularDrumsDataModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ModularDrumsDataModel*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ModularDrumsDataModel._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ModularDrumsDataModel::*)()>(&::VROSC::ModularDrumsDataModel::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1840fc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ModularDrumsDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::VROSC::EmpadDataModel*>*& VROSC::ModularDrumsDataModel::__cordl_internal_get_Empads()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Empads;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::EmpadDataModel*>* const& VROSC::ModularDrumsDataModel::__cordl_internal_get_Empads() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Empads;
}
constexpr void VROSC::ModularDrumsDataModel::__cordl_internal_set_Empads(::System::Collections::Generic::List_1<::VROSC::EmpadDataModel*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Empads)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::ModularDrumsDataModel::__cordl_internal_get_ReverbAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReverbAmount;
}
constexpr float_t const& VROSC::ModularDrumsDataModel::__cordl_internal_get_ReverbAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReverbAmount;
}
constexpr void VROSC::ModularDrumsDataModel::__cordl_internal_set_ReverbAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReverbAmount = value;
}
constexpr float_t& VROSC::ModularDrumsDataModel::__cordl_internal_get_ReverbLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReverbLength;
}
constexpr float_t const& VROSC::ModularDrumsDataModel::__cordl_internal_get_ReverbLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReverbLength;
}
constexpr void VROSC::ModularDrumsDataModel::__cordl_internal_set_ReverbLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReverbLength = value;
}
constexpr float_t& VROSC::ModularDrumsDataModel::__cordl_internal_get_DryVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DryVolume;
}
constexpr float_t const& VROSC::ModularDrumsDataModel::__cordl_internal_get_DryVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DryVolume;
}
constexpr void VROSC::ModularDrumsDataModel::__cordl_internal_set_DryVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DryVolume = value;
}
constexpr float_t& VROSC::ModularDrumsDataModel::__cordl_internal_get_Compression()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Compression;
}
constexpr float_t const& VROSC::ModularDrumsDataModel::__cordl_internal_get_Compression() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Compression;
}
constexpr void VROSC::ModularDrumsDataModel::__cordl_internal_set_Compression(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Compression = value;
}
inline ::StringW VROSC::ModularDrumsDataModel::get_Key()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ModularDrumsDataModel*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t VROSC::ModularDrumsDataModel::get_Version()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ModularDrumsDataModel*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::ModularDrumsDataModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ModularDrumsDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ModularDrumsDataModel* VROSC::ModularDrumsDataModel::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ModularDrumsDataModel*>());
}
// Ctor Parameters []
constexpr ::VROSC::ModularDrumsDataModel::ModularDrumsDataModel()   {
}
