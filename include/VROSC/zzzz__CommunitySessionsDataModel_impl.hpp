#pragma once
// IWYU pragma private; include "VROSC/CommunitySessionsDataModel.hpp"
#include "VROSC/zzzz__SessionsDataModel_impl.hpp"
#include "VROSC/zzzz__CommunitySessionsDataModel_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "VROSC/zzzz__Session_def.hpp"
//  Writing Method size for method: ::VROSC::CommunitySessionsDataModel.get_Key
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::CommunitySessionsDataModel::*)()>(&::VROSC::CommunitySessionsDataModel::get_Key)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1857d28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CommunitySessionsDataModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CommunitySessionsDataModel*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CommunitySessionsDataModel._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CommunitySessionsDataModel::*)()>(&::VROSC::CommunitySessionsDataModel::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1857d68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CommunitySessionsDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::VROSC::Session*>*& VROSC::CommunitySessionsDataModel::__cordl_internal_get_FavoriteSessions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FavoriteSessions;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::VROSC::Session*>* const& VROSC::CommunitySessionsDataModel::__cordl_internal_get_FavoriteSessions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FavoriteSessions;
}
constexpr void VROSC::CommunitySessionsDataModel::__cordl_internal_set_FavoriteSessions(::System::Collections::Generic::Dictionary_2<::StringW,::VROSC::Session*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___FavoriteSessions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW VROSC::CommunitySessionsDataModel::get_Key()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CommunitySessionsDataModel*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void VROSC::CommunitySessionsDataModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CommunitySessionsDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::CommunitySessionsDataModel* VROSC::CommunitySessionsDataModel::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::CommunitySessionsDataModel*>());
}
// Ctor Parameters []
constexpr ::VROSC::CommunitySessionsDataModel::CommunitySessionsDataModel()   {
}
