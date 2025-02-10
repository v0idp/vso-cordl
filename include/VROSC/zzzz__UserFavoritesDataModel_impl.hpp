#pragma once
// IWYU pragma private; include "VROSC/UserFavoritesDataModel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__BaseDataModel_impl.hpp"
#include "VROSC/zzzz__UserFavoritesDataModel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "VROSC/zzzz__Session_def.hpp"
#include "VROSC/zzzz__UserFavoritesDataModel_def.hpp"
//  Writing Method size for method: ::VROSC::UserFavoritesDataModel_Favorite._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserFavoritesDataModel_Favorite::*)()>(&::VROSC::UserFavoritesDataModel_Favorite::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1877080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataModel_Favorite*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::UserFavoritesDataModel_Favorite::__cordl_internal_get_Id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr ::StringW const& VROSC::UserFavoritesDataModel_Favorite::__cordl_internal_get_Id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr void VROSC::UserFavoritesDataModel_Favorite::__cordl_internal_set_Id(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::UserFavoritesDataModel_Favorite::__cordl_internal_get_SessionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionId;
}
constexpr ::StringW const& VROSC::UserFavoritesDataModel_Favorite::__cordl_internal_get_SessionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionId;
}
constexpr void VROSC::UserFavoritesDataModel_Favorite::__cordl_internal_set_SessionId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SessionId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::UserFavoritesDataModel_Favorite::__cordl_internal_get_SessionFavoriteId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionFavoriteId;
}
constexpr ::StringW const& VROSC::UserFavoritesDataModel_Favorite::__cordl_internal_get_SessionFavoriteId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionFavoriteId;
}
constexpr void VROSC::UserFavoritesDataModel_Favorite::__cordl_internal_set_SessionFavoriteId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SessionFavoriteId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::UserFavoritesDataModel_Favorite::__cordl_internal_get_Date()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Date;
}
constexpr ::StringW const& VROSC::UserFavoritesDataModel_Favorite::__cordl_internal_get_Date() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Date;
}
constexpr void VROSC::UserFavoritesDataModel_Favorite::__cordl_internal_set_Date(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Date)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::Session*& VROSC::UserFavoritesDataModel_Favorite::__cordl_internal_get_Session()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Session;
}
constexpr ::VROSC::Session* const& VROSC::UserFavoritesDataModel_Favorite::__cordl_internal_get_Session() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Session;
}
constexpr void VROSC::UserFavoritesDataModel_Favorite::__cordl_internal_set_Session(::VROSC::Session*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Session)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::UserFavoritesDataModel_Favorite::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataModel_Favorite*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UserFavoritesDataModel_Favorite* VROSC::UserFavoritesDataModel_Favorite::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UserFavoritesDataModel_Favorite*>());
}
// Ctor Parameters []
constexpr ::VROSC::UserFavoritesDataModel_Favorite::UserFavoritesDataModel_Favorite()   {
}
//  Writing Method size for method: ::VROSC::UserFavoritesDataModel.get_Key
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::UserFavoritesDataModel::*)()>(&::VROSC::UserFavoritesDataModel::get_Key)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x187922c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataModel*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserFavoritesDataModel.get_Version
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::UserFavoritesDataModel::*)()>(&::VROSC::UserFavoritesDataModel::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x187926c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataModel*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserFavoritesDataModel._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserFavoritesDataModel::*)()>(&::VROSC::UserFavoritesDataModel::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1876e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::VROSC::UserFavoritesDataModel_Favorite*>*& VROSC::UserFavoritesDataModel::__cordl_internal_get_Favorites()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Favorites;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::UserFavoritesDataModel_Favorite*>* const& VROSC::UserFavoritesDataModel::__cordl_internal_get_Favorites() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Favorites;
}
constexpr void VROSC::UserFavoritesDataModel::__cordl_internal_set_Favorites(::System::Collections::Generic::List_1<::VROSC::UserFavoritesDataModel_Favorite*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Favorites)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW VROSC::UserFavoritesDataModel::get_Key()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataModel*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t VROSC::UserFavoritesDataModel::get_Version()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataModel*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::UserFavoritesDataModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UserFavoritesDataModel* VROSC::UserFavoritesDataModel::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UserFavoritesDataModel*>());
}
// Ctor Parameters []
constexpr ::VROSC::UserFavoritesDataModel::UserFavoritesDataModel()   {
}
