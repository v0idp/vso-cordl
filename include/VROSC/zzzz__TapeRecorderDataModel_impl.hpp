#pragma once
// IWYU pragma private; include "VROSC/TapeRecorderDataModel.hpp"
#include "VROSC/zzzz__ToolDataModel_impl.hpp"
#include "VROSC/zzzz__TapeRecorderDataModel_def.hpp"
//  Writing Method size for method: ::VROSC::TapeRecorderDataModel.get_Key
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::TapeRecorderDataModel::*)()>(&::VROSC::TapeRecorderDataModel::get_Key)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1876638;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataModel*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataModel.get_Version
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::TapeRecorderDataModel::*)()>(&::VROSC::TapeRecorderDataModel::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1876678;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataModel*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataModel._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderDataModel::*)()>(&::VROSC::TapeRecorderDataModel::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x187498c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& VROSC::TapeRecorderDataModel::__cordl_internal_get_NormalizeMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NormalizeMultiplier;
}
constexpr float_t const& VROSC::TapeRecorderDataModel::__cordl_internal_get_NormalizeMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NormalizeMultiplier;
}
constexpr void VROSC::TapeRecorderDataModel::__cordl_internal_set_NormalizeMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NormalizeMultiplier = value;
}
constexpr bool& VROSC::TapeRecorderDataModel::__cordl_internal_get_UseAsPreview()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseAsPreview;
}
constexpr bool const& VROSC::TapeRecorderDataModel::__cordl_internal_get_UseAsPreview() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseAsPreview;
}
constexpr void VROSC::TapeRecorderDataModel::__cordl_internal_set_UseAsPreview(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseAsPreview = value;
}
inline ::StringW VROSC::TapeRecorderDataModel::get_Key()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataModel*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t VROSC::TapeRecorderDataModel::get_Version()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataModel*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::TapeRecorderDataModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::TapeRecorderDataModel* VROSC::TapeRecorderDataModel::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TapeRecorderDataModel*>());
}
// Ctor Parameters []
constexpr ::VROSC::TapeRecorderDataModel::TapeRecorderDataModel()   {
}
